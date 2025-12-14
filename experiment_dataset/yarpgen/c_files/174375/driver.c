#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_9 = 17387320477264500749ULL;
signed char var_11 = (signed char)95;
unsigned int var_14 = 3161577102U;
unsigned int var_16 = 15397128U;
unsigned long long int var_18 = 9655604559320531086ULL;
int zero = 0;
unsigned long long int var_20 = 15925488107129443779ULL;
signed char var_21 = (signed char)-78;
unsigned long long int var_22 = 4059573945421883170ULL;
short var_23 = (short)9939;
unsigned short var_24 = (unsigned short)8452;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
