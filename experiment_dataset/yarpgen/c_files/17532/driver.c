#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)243;
unsigned char var_2 = (unsigned char)175;
signed char var_5 = (signed char)-122;
signed char var_6 = (signed char)18;
unsigned char var_7 = (unsigned char)224;
short var_8 = (short)11506;
unsigned char var_10 = (unsigned char)37;
int var_12 = 177349153;
int zero = 0;
short var_13 = (short)-15069;
short var_14 = (short)-12028;
unsigned char var_15 = (unsigned char)131;
void init() {
}

void checksum() {
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
