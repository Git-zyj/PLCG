#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23666;
unsigned char var_3 = (unsigned char)202;
unsigned short var_4 = (unsigned short)17359;
unsigned char var_5 = (unsigned char)50;
int var_7 = 2020682696;
unsigned char var_10 = (unsigned char)50;
int zero = 0;
unsigned short var_11 = (unsigned short)24927;
unsigned short var_12 = (unsigned short)12568;
unsigned char var_13 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
