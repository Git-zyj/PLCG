#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1668103246U;
unsigned long long int var_7 = 5935218260776974402ULL;
int zero = 0;
unsigned int var_13 = 81953008U;
unsigned long long int var_14 = 16150725503706257981ULL;
unsigned long long int var_15 = 2146798102739491656ULL;
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
