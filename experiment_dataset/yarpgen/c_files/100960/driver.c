#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29091;
int var_2 = 976407130;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 3681351468144643648ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)97;
short var_7 = (short)8390;
long long int var_10 = -5521295572697838427LL;
long long int var_13 = -5261597156206510605LL;
int zero = 0;
unsigned char var_16 = (unsigned char)33;
short var_17 = (short)-27399;
unsigned char var_18 = (unsigned char)249;
void init() {
}

void checksum() {
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
