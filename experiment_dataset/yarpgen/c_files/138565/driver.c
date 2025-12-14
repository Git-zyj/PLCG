#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6190391562482348974ULL;
unsigned long long int var_1 = 10184535567926452834ULL;
int var_11 = 1822988782;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3033095181U;
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
