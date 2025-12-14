#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3972722591U;
signed char var_10 = (signed char)45;
long long int var_11 = 7519703392872735491LL;
int zero = 0;
unsigned long long int var_16 = 7463808609166293784ULL;
long long int var_17 = -250854852575384247LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
