#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = -2808141525950936915LL;
signed char var_4 = (signed char)-92;
unsigned int var_7 = 2304106113U;
unsigned long long int var_8 = 1855685482764377771ULL;
unsigned char var_10 = (unsigned char)239;
signed char var_11 = (signed char)-122;
unsigned int var_12 = 988929267U;
unsigned long long int var_15 = 9835963564658260819ULL;
int zero = 0;
signed char var_16 = (signed char)113;
unsigned char var_17 = (unsigned char)254;
unsigned int var_18 = 762596764U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
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
