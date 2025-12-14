#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 264539358;
int var_1 = 1694898663;
unsigned int var_2 = 558355163U;
signed char var_5 = (signed char)-32;
unsigned char var_7 = (unsigned char)9;
unsigned int var_10 = 2079688403U;
int zero = 0;
short var_11 = (short)-13479;
unsigned long long int var_12 = 5898192927979146908ULL;
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
