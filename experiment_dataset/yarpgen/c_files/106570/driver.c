#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)122;
unsigned short var_2 = (unsigned short)30797;
unsigned int var_5 = 3085884891U;
long long int var_7 = -1569145507502608084LL;
unsigned char var_11 = (unsigned char)179;
int zero = 0;
long long int var_14 = -7815023508343725081LL;
unsigned char var_15 = (unsigned char)201;
short var_16 = (short)-6257;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
