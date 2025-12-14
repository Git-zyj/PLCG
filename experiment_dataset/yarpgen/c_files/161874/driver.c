#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9792;
short var_1 = (short)30343;
unsigned short var_2 = (unsigned short)41708;
unsigned short var_3 = (unsigned short)60832;
short var_4 = (short)21030;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)65011;
short var_7 = (short)24683;
short var_8 = (short)30599;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)48900;
short var_13 = (short)28514;
unsigned short var_14 = (unsigned short)4082;
int zero = 0;
short var_15 = (short)-13736;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)36467;
short var_18 = (short)24363;
void init() {
}

void checksum() {
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
