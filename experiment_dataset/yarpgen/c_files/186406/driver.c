#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2436033477U;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 1801801223U;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1318168969U;
unsigned int var_14 = 2588450255U;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1945086562U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
