#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 1592026371184496924LL;
unsigned long long int var_8 = 8842014317027884256ULL;
int var_10 = -537538207;
unsigned char var_11 = (unsigned char)95;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 1877468080U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)20;
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
