#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 655837998;
int var_6 = 1319068301;
int var_8 = 118041298;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-18853;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)63;
long long int var_14 = -8786622154911833679LL;
long long int var_15 = -3924773437036841256LL;
long long int var_16 = 2163456919432017187LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
