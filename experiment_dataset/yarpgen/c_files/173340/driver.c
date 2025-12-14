#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11214;
short var_2 = (short)8860;
unsigned short var_3 = (unsigned short)62325;
unsigned char var_10 = (unsigned char)11;
unsigned short var_11 = (unsigned short)64370;
int zero = 0;
unsigned short var_14 = (unsigned short)3159;
unsigned char var_15 = (unsigned char)65;
unsigned char var_16 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
