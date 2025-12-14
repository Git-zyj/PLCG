#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)2;
_Bool var_3 = (_Bool)1;
int var_7 = 387231548;
unsigned long long int var_10 = 17136552862690310973ULL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-2226;
unsigned char var_13 = (unsigned char)40;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -1702557709;
unsigned short var_16 = (unsigned short)38741;
signed char var_17 = (signed char)-12;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
