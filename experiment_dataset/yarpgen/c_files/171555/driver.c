#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 110039389U;
unsigned long long int var_2 = 1403958014175071073ULL;
unsigned long long int var_8 = 16588337724262531483ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-10927;
int var_12 = 937803271;
int var_13 = 1904170836;
int zero = 0;
unsigned int var_14 = 1120135766U;
unsigned char var_15 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
