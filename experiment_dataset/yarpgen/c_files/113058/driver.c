#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
unsigned long long int var_1 = 13619450889388794657ULL;
int var_4 = -958958947;
int var_6 = 149100725;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)5872;
int var_12 = -2098359258;
signed char var_13 = (signed char)-122;
int var_15 = -521602724;
int zero = 0;
int var_16 = 145008453;
int var_17 = 873129646;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3212606593U;
long long int var_20 = -3483134610004339103LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
