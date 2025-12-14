#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4126463494285795079ULL;
unsigned int var_6 = 4135593920U;
unsigned int var_8 = 4034588017U;
unsigned long long int var_10 = 17820276145805009706ULL;
int zero = 0;
unsigned int var_11 = 708534111U;
unsigned int var_12 = 1028108746U;
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
