#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1961649615U;
int var_3 = -391399811;
unsigned short var_8 = (unsigned short)22300;
unsigned long long int var_10 = 10167516991745197624ULL;
unsigned char var_11 = (unsigned char)252;
unsigned long long int var_12 = 9161598605740551337ULL;
int zero = 0;
unsigned int var_14 = 3856613197U;
unsigned long long int var_15 = 8425320575606724202ULL;
unsigned char var_16 = (unsigned char)56;
unsigned long long int var_17 = 12799624324652123152ULL;
unsigned char var_18 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
