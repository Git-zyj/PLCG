#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned char var_5 = (unsigned char)210;
unsigned char var_6 = (unsigned char)60;
unsigned char var_7 = (unsigned char)86;
unsigned char var_11 = (unsigned char)250;
unsigned char var_13 = (unsigned char)61;
unsigned char var_14 = (unsigned char)175;
int zero = 0;
unsigned char var_15 = (unsigned char)31;
unsigned char var_16 = (unsigned char)19;
unsigned char var_17 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
