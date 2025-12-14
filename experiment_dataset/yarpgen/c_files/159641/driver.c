#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58334;
unsigned long long int var_1 = 14618646527986120348ULL;
unsigned long long int var_5 = 3116046518984912262ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)54874;
signed char var_9 = (signed char)-80;
int var_10 = -122371805;
signed char var_11 = (signed char)73;
unsigned short var_12 = (unsigned short)13229;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = 276690065656135246LL;
int var_17 = -774926965;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
