#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13116;
short var_1 = (short)-8006;
unsigned char var_4 = (unsigned char)8;
unsigned short var_8 = (unsigned short)27318;
int var_9 = 288491613;
unsigned char var_10 = (unsigned char)232;
unsigned char var_11 = (unsigned char)189;
unsigned char var_15 = (unsigned char)186;
int zero = 0;
int var_16 = 2125533922;
unsigned char var_17 = (unsigned char)11;
int var_18 = 1132903413;
int var_19 = 35446646;
short var_20 = (short)10365;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
