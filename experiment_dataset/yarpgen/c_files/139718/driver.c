#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19512;
unsigned char var_4 = (unsigned char)58;
unsigned int var_5 = 3499179507U;
signed char var_6 = (signed char)-29;
unsigned char var_9 = (unsigned char)24;
short var_10 = (short)-24171;
_Bool var_11 = (_Bool)1;
short var_13 = (short)17597;
unsigned int var_14 = 517641378U;
int zero = 0;
unsigned char var_15 = (unsigned char)112;
short var_16 = (short)-22852;
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
