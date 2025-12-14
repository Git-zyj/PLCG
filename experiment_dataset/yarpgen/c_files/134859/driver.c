#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 450135902;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)24;
unsigned int var_5 = 41678683U;
unsigned short var_6 = (unsigned short)4636;
short var_8 = (short)-21188;
unsigned char var_9 = (unsigned char)95;
unsigned int var_10 = 1258845825U;
unsigned char var_11 = (unsigned char)168;
unsigned short var_12 = (unsigned short)35765;
int zero = 0;
unsigned char var_13 = (unsigned char)119;
unsigned short var_14 = (unsigned short)11297;
unsigned long long int var_15 = 5878559020701002531ULL;
signed char var_16 = (signed char)(-127 - 1);
unsigned char var_17 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
