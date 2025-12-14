#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53034;
unsigned char var_3 = (unsigned char)69;
short var_5 = (short)24109;
signed char var_6 = (signed char)37;
long long int var_7 = -7645717708557101004LL;
int var_10 = 715984796;
long long int var_11 = 136491217255442934LL;
int zero = 0;
int var_12 = 64374567;
unsigned int var_13 = 1576699646U;
void init() {
}

void checksum() {
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
