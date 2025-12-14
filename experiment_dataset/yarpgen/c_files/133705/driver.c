#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15491402713189818917ULL;
unsigned long long int var_1 = 5940591439248512341ULL;
unsigned long long int var_3 = 17733859423417163924ULL;
unsigned char var_4 = (unsigned char)238;
int var_8 = 771285317;
unsigned int var_9 = 1127714979U;
unsigned int var_12 = 1591494085U;
int zero = 0;
unsigned int var_16 = 1077058754U;
unsigned int var_17 = 2293177826U;
short var_18 = (short)29931;
unsigned long long int var_19 = 11822220352505531379ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
