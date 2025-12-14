#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)191;
unsigned char var_5 = (unsigned char)237;
int var_13 = 2146934168;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 2331720207600306361ULL;
unsigned char var_18 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
