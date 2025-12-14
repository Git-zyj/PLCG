#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
unsigned char var_1 = (unsigned char)4;
short var_2 = (short)-2823;
short var_9 = (short)1889;
int zero = 0;
long long int var_13 = -7072456053742986951LL;
int var_14 = -2112265656;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
