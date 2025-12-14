#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14941741604564314670ULL;
short var_5 = (short)10766;
unsigned short var_6 = (unsigned short)7169;
short var_7 = (short)-25326;
unsigned short var_8 = (unsigned short)58919;
unsigned char var_10 = (unsigned char)90;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)99;
int zero = 0;
short var_15 = (short)-20899;
unsigned char var_16 = (unsigned char)28;
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
