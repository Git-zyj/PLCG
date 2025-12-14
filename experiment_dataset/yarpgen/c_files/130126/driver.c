#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 406488880;
unsigned short var_2 = (unsigned short)38540;
short var_4 = (short)-11289;
unsigned int var_5 = 944293005U;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 1965239719185968386ULL;
unsigned int var_14 = 1744989771U;
unsigned char var_15 = (unsigned char)253;
int zero = 0;
unsigned int var_16 = 1642293296U;
long long int var_17 = 7976032464556285762LL;
long long int var_18 = -5700999041838681272LL;
unsigned char var_19 = (unsigned char)52;
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
