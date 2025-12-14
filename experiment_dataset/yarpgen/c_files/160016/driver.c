#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)95;
long long int var_11 = 1581379988542221128LL;
short var_13 = (short)2927;
long long int var_18 = 7899774358039788895LL;
int zero = 0;
unsigned int var_20 = 424641634U;
unsigned int var_21 = 3955312862U;
unsigned char var_22 = (unsigned char)124;
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
