#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -367784300;
unsigned char var_1 = (unsigned char)111;
signed char var_4 = (signed char)50;
unsigned int var_5 = 2180060664U;
unsigned char var_6 = (unsigned char)107;
int var_7 = -2002323850;
unsigned char var_10 = (unsigned char)39;
unsigned char var_11 = (unsigned char)122;
int zero = 0;
unsigned char var_14 = (unsigned char)206;
int var_15 = -758561130;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1919039655U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
