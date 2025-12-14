#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
long long int var_1 = -5892656922656275174LL;
unsigned int var_2 = 2373097585U;
signed char var_3 = (signed char)70;
signed char var_4 = (signed char)-22;
long long int var_7 = -6560273601828451436LL;
short var_8 = (short)10557;
short var_9 = (short)14499;
signed char var_10 = (signed char)103;
signed char var_12 = (signed char)117;
unsigned int var_14 = 3793630290U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-19;
signed char var_17 = (signed char)-40;
signed char var_18 = (signed char)-24;
int zero = 0;
long long int var_19 = -3047873076534248449LL;
signed char var_20 = (signed char)65;
unsigned long long int var_21 = 1683511169756399502ULL;
unsigned int var_22 = 2447771096U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
