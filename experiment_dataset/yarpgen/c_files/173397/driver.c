#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23483;
unsigned char var_2 = (unsigned char)205;
signed char var_3 = (signed char)13;
unsigned int var_4 = 3505280640U;
unsigned long long int var_7 = 630794234912935848ULL;
unsigned char var_8 = (unsigned char)129;
unsigned char var_13 = (unsigned char)175;
int zero = 0;
unsigned short var_15 = (unsigned short)52297;
signed char var_16 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
