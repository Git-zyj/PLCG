#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2006118002;
short var_9 = (short)-2423;
unsigned int var_13 = 3989662737U;
unsigned char var_18 = (unsigned char)159;
int zero = 0;
unsigned short var_19 = (unsigned short)55213;
unsigned int var_20 = 2319043274U;
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
