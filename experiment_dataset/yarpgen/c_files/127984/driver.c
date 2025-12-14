#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1454980260;
unsigned int var_6 = 222554134U;
unsigned char var_7 = (unsigned char)48;
int var_14 = 398772522;
int zero = 0;
int var_17 = -670115564;
int var_18 = 1927106167;
unsigned char var_19 = (unsigned char)73;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
