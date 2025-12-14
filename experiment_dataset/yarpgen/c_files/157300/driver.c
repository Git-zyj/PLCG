#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3721382870505520346ULL;
short var_3 = (short)17646;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-6;
signed char var_6 = (signed char)118;
signed char var_8 = (signed char)-107;
long long int var_11 = 293648277443167863LL;
unsigned char var_12 = (unsigned char)92;
int zero = 0;
int var_13 = 1982898272;
short var_14 = (short)25791;
long long int var_15 = 1331486495905854189LL;
signed char var_16 = (signed char)65;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
