#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-18150;
unsigned int var_7 = 3876839622U;
long long int var_13 = 8926900384255002968LL;
unsigned char var_16 = (unsigned char)0;
int zero = 0;
unsigned char var_20 = (unsigned char)109;
unsigned long long int var_21 = 12234489014574740812ULL;
long long int var_22 = -4225696531552439297LL;
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
