#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)119;
unsigned int var_7 = 4061968628U;
unsigned char var_15 = (unsigned char)146;
short var_16 = (short)-6500;
int zero = 0;
signed char var_18 = (signed char)-117;
short var_19 = (short)1972;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
