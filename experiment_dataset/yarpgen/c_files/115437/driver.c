#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 533189834U;
unsigned short var_2 = (unsigned short)43783;
short var_5 = (short)28947;
unsigned char var_9 = (unsigned char)18;
unsigned int var_15 = 1123842465U;
int zero = 0;
unsigned long long int var_16 = 11323592783950890194ULL;
unsigned short var_17 = (unsigned short)33658;
void init() {
}

void checksum() {
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
