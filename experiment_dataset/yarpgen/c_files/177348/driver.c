#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -162736011;
unsigned long long int var_9 = 11369752351033046928ULL;
int var_10 = -1127107092;
long long int var_11 = -2294113741033128911LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 2749052805538927211ULL;
long long int var_18 = -2900928406155417107LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
