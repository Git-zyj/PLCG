#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned int var_7 = 529154537U;
unsigned int var_10 = 1731472526U;
int var_11 = 665610303;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 3238471964U;
_Bool var_14 = (_Bool)0;
long long int var_15 = -391070201853079518LL;
unsigned long long int var_16 = 11410707225190478689ULL;
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
