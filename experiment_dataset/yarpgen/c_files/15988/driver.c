#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 2266726437595050880ULL;
unsigned long long int var_10 = 9699175900648868654ULL;
int zero = 0;
signed char var_14 = (signed char)-79;
unsigned short var_15 = (unsigned short)43;
unsigned short var_16 = (unsigned short)3786;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
