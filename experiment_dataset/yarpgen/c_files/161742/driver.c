#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_5 = (short)31658;
_Bool var_6 = (_Bool)0;
int var_7 = 764238582;
signed char var_8 = (signed char)0;
long long int var_11 = -2797389563488330010LL;
int zero = 0;
unsigned long long int var_13 = 1829801162042616127ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-8673;
long long int var_16 = 6860140033708318587LL;
void init() {
}

void checksum() {
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
