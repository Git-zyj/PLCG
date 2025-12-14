#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2468767672U;
_Bool var_2 = (_Bool)0;
int var_3 = 507874747;
unsigned long long int var_5 = 7252163045088443734ULL;
unsigned long long int var_6 = 4801640221442405754ULL;
unsigned char var_8 = (unsigned char)36;
unsigned long long int var_10 = 5933759606922859887ULL;
int var_11 = 367245462;
int var_12 = 1557487076;
unsigned long long int var_13 = 13766273000000057724ULL;
int zero = 0;
unsigned long long int var_14 = 15343071494683003225ULL;
short var_15 = (short)22338;
unsigned int var_16 = 3599758157U;
_Bool var_17 = (_Bool)0;
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
