#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)56026;
unsigned char var_3 = (unsigned char)217;
unsigned char var_4 = (unsigned char)77;
unsigned int var_7 = 209065274U;
unsigned int var_8 = 2721383787U;
unsigned long long int var_10 = 4626445259477261239ULL;
int zero = 0;
short var_14 = (short)-3368;
unsigned char var_15 = (unsigned char)21;
_Bool var_16 = (_Bool)1;
int var_17 = 2102205390;
int var_18 = 1785489143;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
