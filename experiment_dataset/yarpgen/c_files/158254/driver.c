#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_13 = 1763619145U;
long long int var_14 = -5273948340828154587LL;
unsigned long long int var_15 = 6122695635508238434ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7946358238523042829ULL;
void init() {
}

void checksum() {
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
