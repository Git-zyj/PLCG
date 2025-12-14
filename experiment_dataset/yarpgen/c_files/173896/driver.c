#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
int var_1 = 1063926200;
unsigned short var_2 = (unsigned short)63920;
unsigned int var_3 = 507137024U;
unsigned char var_4 = (unsigned char)145;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 16846112228772537686ULL;
short var_8 = (short)9037;
unsigned char var_9 = (unsigned char)7;
int zero = 0;
short var_10 = (short)2753;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-394;
unsigned short var_13 = (unsigned short)1007;
unsigned short var_14 = (unsigned short)14034;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
