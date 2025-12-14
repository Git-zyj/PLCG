#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)48;
unsigned long long int var_5 = 12395423610184516456ULL;
signed char var_6 = (signed char)67;
int var_7 = 1919101294;
int zero = 0;
unsigned short var_11 = (unsigned short)53247;
unsigned long long int var_12 = 1377125972037761676ULL;
unsigned int var_13 = 106747689U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
