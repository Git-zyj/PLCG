#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1618077357U;
unsigned int var_4 = 162280509U;
unsigned int var_5 = 680554886U;
unsigned char var_6 = (unsigned char)249;
int zero = 0;
int var_10 = -1515015558;
int var_11 = 2013944320;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
