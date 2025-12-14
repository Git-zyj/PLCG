#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18022;
unsigned char var_4 = (unsigned char)55;
unsigned long long int var_5 = 931036823306111391ULL;
short var_10 = (short)-691;
_Bool var_11 = (_Bool)0;
int var_12 = 724506435;
unsigned int var_14 = 2939447121U;
unsigned short var_16 = (unsigned short)28550;
unsigned char var_18 = (unsigned char)250;
int zero = 0;
unsigned short var_19 = (unsigned short)40920;
unsigned int var_20 = 2728333548U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
