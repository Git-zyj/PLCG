#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 106195736;
unsigned long long int var_11 = 12922306500069916909ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3917105136U;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1431809008U;
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
