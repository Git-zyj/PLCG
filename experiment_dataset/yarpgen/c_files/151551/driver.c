#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24156;
short var_2 = (short)-21092;
unsigned long long int var_6 = 7115364367155409301ULL;
unsigned long long int var_7 = 16322021740266817079ULL;
short var_11 = (short)17081;
unsigned short var_12 = (unsigned short)65513;
unsigned short var_13 = (unsigned short)5870;
int zero = 0;
unsigned char var_16 = (unsigned char)125;
long long int var_17 = 3217149096689189429LL;
unsigned char var_18 = (unsigned char)129;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
