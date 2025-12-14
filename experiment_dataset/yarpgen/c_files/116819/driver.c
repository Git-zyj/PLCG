#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3223250102U;
long long int var_9 = -5209667790066955695LL;
unsigned long long int var_11 = 17135829133198660502ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3464202922U;
void init() {
}

void checksum() {
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
