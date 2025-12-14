#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55905;
unsigned short var_2 = (unsigned short)57011;
unsigned short var_4 = (unsigned short)4042;
unsigned short var_5 = (unsigned short)8;
_Bool var_7 = (_Bool)0;
long long int var_10 = -5543152004167603538LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 1513414430333284833ULL;
short var_14 = (short)-32748;
int zero = 0;
unsigned int var_15 = 376080717U;
long long int var_16 = -3309954306547298392LL;
unsigned char var_17 = (unsigned char)117;
void init() {
}

void checksum() {
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
