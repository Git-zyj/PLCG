#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9052;
short var_5 = (short)-19505;
short var_7 = (short)32648;
unsigned char var_8 = (unsigned char)106;
unsigned char var_9 = (unsigned char)254;
short var_10 = (short)-30516;
unsigned char var_16 = (unsigned char)24;
int zero = 0;
unsigned char var_20 = (unsigned char)92;
unsigned char var_21 = (unsigned char)100;
unsigned char var_22 = (unsigned char)173;
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
