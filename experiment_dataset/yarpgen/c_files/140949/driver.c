#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3472708744098144385LL;
unsigned char var_5 = (unsigned char)11;
unsigned char var_6 = (unsigned char)204;
short var_17 = (short)-10328;
int zero = 0;
unsigned char var_20 = (unsigned char)62;
short var_21 = (short)-18590;
short var_22 = (short)-32014;
unsigned int var_23 = 847814597U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
