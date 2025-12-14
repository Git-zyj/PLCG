#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5705366765023304553LL;
unsigned int var_6 = 3883509137U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 787322666U;
unsigned int var_10 = 3982540772U;
int zero = 0;
unsigned int var_12 = 1322069486U;
unsigned int var_13 = 3443893971U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
