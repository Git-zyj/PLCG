#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18020302300224485956ULL;
unsigned long long int var_1 = 10651137064442547861ULL;
unsigned long long int var_2 = 16578256715268272846ULL;
unsigned long long int var_3 = 669264616900356595ULL;
unsigned long long int var_4 = 4275924608307640493ULL;
unsigned long long int var_5 = 6042522064277041568ULL;
unsigned long long int var_6 = 17143023297462844135ULL;
unsigned long long int var_7 = 11204959231978825414ULL;
unsigned long long int var_8 = 1292635087418606657ULL;
unsigned long long int var_9 = 13849769822640073671ULL;
unsigned long long int var_10 = 18375976272492921198ULL;
int zero = 0;
unsigned long long int var_11 = 11942814216424773752ULL;
unsigned long long int var_12 = 11361259583493019643ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
