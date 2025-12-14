#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 882589304;
unsigned long long int var_8 = 1707933371468961963ULL;
short var_9 = (short)-17;
int zero = 0;
short var_14 = (short)24796;
long long int var_15 = 5163822998407770030LL;
unsigned short var_16 = (unsigned short)33299;
short var_17 = (short)-4074;
long long int var_18 = 2723267007874818310LL;
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
