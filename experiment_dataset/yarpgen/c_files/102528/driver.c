#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)248;
unsigned int var_14 = 2984453915U;
unsigned int var_15 = 2109134332U;
long long int var_18 = 4529573990425728427LL;
int zero = 0;
int var_20 = 1562920114;
unsigned int var_21 = 491866033U;
unsigned char var_22 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
