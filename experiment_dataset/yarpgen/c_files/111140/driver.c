#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2403123265U;
long long int var_8 = -7142170288849481736LL;
unsigned long long int var_10 = 14961258645933123295ULL;
short var_14 = (short)-12718;
unsigned int var_15 = 2266490017U;
long long int var_17 = -5356114354702205180LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)56087;
unsigned char var_21 = (unsigned char)124;
unsigned long long int var_22 = 13464059694890127716ULL;
unsigned char var_23 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
