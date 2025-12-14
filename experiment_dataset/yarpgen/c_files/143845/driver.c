#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14868856732161735751ULL;
signed char var_3 = (signed char)-126;
unsigned short var_5 = (unsigned short)30506;
int var_7 = 1235329254;
short var_8 = (short)13165;
short var_10 = (short)13889;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 327555774908434287ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)28744;
short var_19 = (short)24702;
int zero = 0;
int var_20 = 352835862;
unsigned short var_21 = (unsigned short)4525;
short var_22 = (short)25726;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
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
