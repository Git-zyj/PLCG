#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17437;
unsigned char var_1 = (unsigned char)221;
unsigned char var_2 = (unsigned char)52;
unsigned long long int var_3 = 4600772428118425489ULL;
unsigned short var_4 = (unsigned short)132;
short var_6 = (short)2066;
unsigned long long int var_7 = 10063196175252888201ULL;
unsigned short var_8 = (unsigned short)302;
short var_11 = (short)-15216;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)15976;
unsigned short var_15 = (unsigned short)17543;
_Bool var_16 = (_Bool)1;
long long int var_17 = 4037973661282663683LL;
void init() {
}

void checksum() {
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
