#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
unsigned int var_4 = 2242033874U;
unsigned int var_14 = 196599224U;
int zero = 0;
unsigned long long int var_15 = 9507206472374132442ULL;
unsigned char var_16 = (unsigned char)235;
unsigned long long int var_17 = 5733771201706359568ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
