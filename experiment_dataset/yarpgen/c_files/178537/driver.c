#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1121642256;
long long int var_7 = 7066156285302085309LL;
short var_15 = (short)-23534;
int zero = 0;
unsigned short var_19 = (unsigned short)42361;
unsigned int var_20 = 348330100U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
