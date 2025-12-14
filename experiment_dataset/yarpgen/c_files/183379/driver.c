#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_7 = -7191280990582104730LL;
long long int var_8 = -2849559726273130065LL;
int var_10 = -1312576465;
unsigned int var_12 = 3905424706U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)74;
long long int var_16 = 2798888832764656196LL;
unsigned int var_17 = 3550922706U;
int var_18 = -640272174;
void init() {
}

void checksum() {
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
