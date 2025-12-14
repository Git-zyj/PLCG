#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned char var_1 = (unsigned char)7;
unsigned char var_2 = (unsigned char)249;
unsigned char var_3 = (unsigned char)63;
unsigned char var_4 = (unsigned char)15;
unsigned char var_5 = (unsigned char)150;
unsigned char var_7 = (unsigned char)8;
unsigned char var_8 = (unsigned char)12;
unsigned char var_10 = (unsigned char)142;
int zero = 0;
unsigned char var_11 = (unsigned char)75;
unsigned char var_12 = (unsigned char)83;
unsigned char var_13 = (unsigned char)95;
unsigned char var_14 = (unsigned char)234;
unsigned char var_15 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
