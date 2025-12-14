#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5951063579761623037ULL;
unsigned long long int var_9 = 5051244136819517047ULL;
unsigned long long int var_10 = 2270266811087452950ULL;
unsigned long long int var_11 = 13367681416142352691ULL;
unsigned long long int var_12 = 9869812240004641633ULL;
int zero = 0;
unsigned long long int var_13 = 1709906681525916518ULL;
unsigned long long int var_14 = 11544310609471993483ULL;
unsigned long long int var_15 = 1965814441239994150ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
