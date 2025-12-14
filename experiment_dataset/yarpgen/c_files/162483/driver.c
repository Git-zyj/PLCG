#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2127821036U;
unsigned short var_2 = (unsigned short)7853;
int var_5 = 1338086330;
int var_6 = -1070416792;
unsigned long long int var_8 = 15155660779585555930ULL;
unsigned int var_11 = 2949279772U;
int zero = 0;
unsigned long long int var_14 = 386920202370924704ULL;
unsigned char var_15 = (unsigned char)173;
unsigned int var_16 = 2863490402U;
long long int var_17 = 2774429998051701334LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
