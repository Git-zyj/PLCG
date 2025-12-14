#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_7 = 636822608U;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 176143272U;
int zero = 0;
unsigned long long int var_14 = 12953601167471632283ULL;
unsigned int var_15 = 4272019903U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
