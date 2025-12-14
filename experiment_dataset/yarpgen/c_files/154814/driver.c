#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned char var_2 = (unsigned char)23;
unsigned char var_7 = (unsigned char)170;
unsigned char var_8 = (unsigned char)233;
unsigned char var_9 = (unsigned char)62;
unsigned char var_10 = (unsigned char)190;
unsigned char var_11 = (unsigned char)115;
unsigned char var_14 = (unsigned char)207;
unsigned char var_15 = (unsigned char)159;
unsigned char var_16 = (unsigned char)178;
int zero = 0;
unsigned char var_20 = (unsigned char)47;
unsigned char var_21 = (unsigned char)3;
unsigned char var_22 = (unsigned char)227;
unsigned char var_23 = (unsigned char)203;
unsigned char var_24 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
