#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2070529857U;
long long int var_9 = 8935408876877043375LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 17297847897971805576ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -950136959;
void init() {
}

void checksum() {
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
