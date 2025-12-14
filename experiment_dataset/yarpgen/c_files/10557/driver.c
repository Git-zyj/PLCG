#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3270526086433162956ULL;
short var_2 = (short)21730;
short var_4 = (short)-18706;
unsigned int var_6 = 123839665U;
unsigned int var_10 = 586263827U;
unsigned short var_12 = (unsigned short)49419;
unsigned long long int var_13 = 3107454249195695150ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)6284;
long long int var_16 = 3246138344270575777LL;
short var_17 = (short)-14504;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
