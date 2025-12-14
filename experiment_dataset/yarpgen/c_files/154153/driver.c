#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)206;
unsigned long long int var_7 = 16852132862171013438ULL;
unsigned long long int var_15 = 6153068304843061388ULL;
int var_16 = -587130425;
int zero = 0;
unsigned char var_19 = (unsigned char)68;
unsigned int var_20 = 27120537U;
int var_21 = -294946340;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
