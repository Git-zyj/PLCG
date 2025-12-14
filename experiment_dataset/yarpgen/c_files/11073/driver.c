#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned int var_6 = 152306146U;
signed char var_8 = (signed char)-66;
int var_9 = -1727665203;
int var_10 = -427350652;
short var_11 = (short)2381;
short var_12 = (short)21964;
unsigned int var_13 = 3943226668U;
int zero = 0;
unsigned long long int var_15 = 11068781336677452060ULL;
unsigned long long int var_16 = 16490207845526290597ULL;
_Bool var_17 = (_Bool)1;
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
