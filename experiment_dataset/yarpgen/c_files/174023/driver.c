#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 135710608565631792ULL;
unsigned int var_1 = 3446862918U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int zero = 0;
long long int var_10 = 8075226859603857693LL;
long long int var_11 = 5655584213770496225LL;
unsigned int var_12 = 836456785U;
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
