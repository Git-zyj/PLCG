#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2051755765U;
int var_5 = 940319744;
unsigned short var_7 = (unsigned short)10320;
int var_10 = -1735376012;
int zero = 0;
short var_14 = (short)3012;
unsigned short var_15 = (unsigned short)43124;
unsigned long long int var_16 = 11703271943034177060ULL;
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
