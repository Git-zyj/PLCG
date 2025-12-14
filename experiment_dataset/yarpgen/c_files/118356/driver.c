#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
unsigned int var_13 = 1644797176U;
long long int var_15 = -3925538874908901252LL;
long long int var_16 = 4885418534883130166LL;
int zero = 0;
int var_19 = -2025722336;
short var_20 = (short)-9775;
unsigned int var_21 = 2807654911U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
