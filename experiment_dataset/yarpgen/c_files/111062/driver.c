#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -7708090679144229703LL;
long long int var_4 = -477440179168994259LL;
int var_5 = 2057583677;
unsigned int var_6 = 1256887948U;
unsigned int var_7 = 2446412839U;
int var_9 = -1843592295;
unsigned char var_10 = (unsigned char)94;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2948566387U;
signed char var_14 = (signed char)-87;
unsigned short var_15 = (unsigned short)8160;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
