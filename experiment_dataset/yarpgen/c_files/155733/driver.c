#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24803;
unsigned char var_1 = (unsigned char)122;
signed char var_3 = (signed char)113;
short var_4 = (short)-11619;
unsigned char var_6 = (unsigned char)125;
int var_7 = -1496472401;
int var_11 = 1732600835;
int zero = 0;
unsigned short var_12 = (unsigned short)63698;
unsigned char var_13 = (unsigned char)41;
int var_14 = -511157129;
unsigned short var_15 = (unsigned short)2050;
void init() {
}

void checksum() {
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
