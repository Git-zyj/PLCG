#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 1407715269U;
unsigned short var_5 = (unsigned short)33196;
unsigned int var_8 = 1474336256U;
unsigned int var_9 = 4158472909U;
short var_13 = (short)-17762;
int zero = 0;
short var_14 = (short)7994;
unsigned short var_15 = (unsigned short)42980;
unsigned int var_16 = 1780698106U;
unsigned short var_17 = (unsigned short)15513;
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
