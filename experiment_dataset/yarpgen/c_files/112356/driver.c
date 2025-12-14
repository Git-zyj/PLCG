#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25343;
short var_3 = (short)-9273;
unsigned int var_4 = 1981563801U;
unsigned int var_5 = 2576424183U;
signed char var_9 = (signed char)85;
unsigned char var_10 = (unsigned char)16;
int zero = 0;
short var_12 = (short)16641;
short var_13 = (short)-22546;
unsigned char var_14 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
