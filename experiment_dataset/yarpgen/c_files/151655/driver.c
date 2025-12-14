#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
unsigned char var_1 = (unsigned char)97;
unsigned short var_3 = (unsigned short)14103;
unsigned int var_14 = 1472978625U;
unsigned int var_16 = 1731930308U;
unsigned int var_17 = 748584565U;
unsigned char var_18 = (unsigned char)216;
int zero = 0;
unsigned char var_19 = (unsigned char)78;
short var_20 = (short)-10725;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
