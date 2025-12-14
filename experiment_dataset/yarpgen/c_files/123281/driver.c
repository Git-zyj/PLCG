#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 701545236836307884LL;
_Bool var_1 = (_Bool)0;
short var_5 = (short)-31681;
unsigned char var_6 = (unsigned char)178;
long long int var_7 = 6881051529510206865LL;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -2193739112312841420LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)67;
unsigned long long int var_16 = 10253289329628008819ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
