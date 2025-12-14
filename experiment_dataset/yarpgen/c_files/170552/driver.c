#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12946;
int var_1 = 563293702;
int var_2 = -2140479552;
unsigned char var_3 = (unsigned char)74;
long long int var_4 = -7239192615687813982LL;
short var_6 = (short)-29287;
int var_7 = -1500042585;
int var_10 = 21511614;
unsigned short var_11 = (unsigned short)33649;
unsigned long long int var_12 = 16437537238883651897ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)65;
unsigned short var_14 = (unsigned short)24173;
unsigned char var_15 = (unsigned char)242;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
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
