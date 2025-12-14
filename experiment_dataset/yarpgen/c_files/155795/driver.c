#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6939636865405376284ULL;
unsigned long long int var_5 = 2077120544211319497ULL;
unsigned long long int var_6 = 9415916374996721755ULL;
unsigned long long int var_7 = 2826662377282490474ULL;
long long int var_8 = 7915247716395760848LL;
int zero = 0;
unsigned int var_10 = 3214935177U;
unsigned int var_11 = 3690634637U;
unsigned long long int var_12 = 4284035481370238922ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
