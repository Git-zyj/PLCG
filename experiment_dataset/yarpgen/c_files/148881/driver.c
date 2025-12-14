#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1886758801;
unsigned long long int var_4 = 199302530894077874ULL;
unsigned long long int var_5 = 677522339394985839ULL;
int zero = 0;
unsigned int var_12 = 2273144526U;
unsigned int var_13 = 2380458798U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
