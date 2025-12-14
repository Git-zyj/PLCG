#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37120;
unsigned short var_6 = (unsigned short)26158;
unsigned char var_9 = (unsigned char)30;
unsigned short var_10 = (unsigned short)55331;
unsigned short var_11 = (unsigned short)49659;
unsigned char var_14 = (unsigned char)239;
int zero = 0;
unsigned short var_17 = (unsigned short)12767;
unsigned char var_18 = (unsigned char)226;
unsigned char var_19 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
