#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2549275273002763972ULL;
unsigned long long int var_1 = 3330488092807055057ULL;
unsigned char var_11 = (unsigned char)238;
_Bool var_12 = (_Bool)1;
unsigned long long int var_16 = 1589154036424078266ULL;
short var_18 = (short)-1841;
int zero = 0;
unsigned short var_20 = (unsigned short)40893;
int var_21 = 1152482667;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
