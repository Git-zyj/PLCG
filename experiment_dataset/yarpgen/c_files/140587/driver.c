#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)21043;
short var_3 = (short)-259;
long long int var_4 = 7503991368192468913LL;
unsigned int var_5 = 3758415133U;
short var_6 = (short)-12144;
unsigned int var_7 = 3374303057U;
unsigned int var_12 = 790726779U;
unsigned char var_13 = (unsigned char)154;
int zero = 0;
unsigned long long int var_14 = 15854993058261469108ULL;
long long int var_15 = -6258161149470670747LL;
signed char var_16 = (signed char)-100;
long long int var_17 = -1115123689365766885LL;
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
