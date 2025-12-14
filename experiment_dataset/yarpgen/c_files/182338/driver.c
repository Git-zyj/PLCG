#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7932379166236595780ULL;
unsigned char var_1 = (unsigned char)40;
unsigned short var_2 = (unsigned short)17396;
long long int var_3 = -7528221989568113328LL;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)6;
short var_8 = (short)30654;
unsigned char var_11 = (unsigned char)183;
int var_13 = -1450738598;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)36;
unsigned int var_16 = 2306990752U;
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
