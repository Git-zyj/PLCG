#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1730763638841913299ULL;
unsigned int var_7 = 422648005U;
int zero = 0;
unsigned int var_10 = 3333707969U;
unsigned long long int var_11 = 4727339226908336176ULL;
unsigned long long int var_12 = 6971718566313427259ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
