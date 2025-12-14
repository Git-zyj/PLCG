#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)166;
unsigned int var_7 = 2326030967U;
int var_8 = -148330841;
unsigned char var_9 = (unsigned char)253;
int zero = 0;
signed char var_15 = (signed char)43;
unsigned int var_16 = 1522944405U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
