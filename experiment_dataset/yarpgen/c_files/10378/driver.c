#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22960;
unsigned char var_2 = (unsigned char)10;
unsigned int var_5 = 4108866691U;
unsigned short var_6 = (unsigned short)23196;
unsigned int var_7 = 765511311U;
short var_11 = (short)27399;
unsigned int var_13 = 2706367387U;
unsigned char var_16 = (unsigned char)29;
int zero = 0;
unsigned short var_19 = (unsigned short)30037;
unsigned long long int var_20 = 14790257578814190151ULL;
unsigned int var_21 = 1981917928U;
unsigned int var_22 = 655685297U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
