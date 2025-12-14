#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20470;
short var_3 = (short)5854;
short var_5 = (short)-15469;
unsigned int var_7 = 1022745948U;
unsigned long long int var_8 = 16764345398171521306ULL;
unsigned long long int var_10 = 14389787374420995833ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 2837786397286564888ULL;
unsigned char var_13 = (unsigned char)198;
unsigned short var_14 = (unsigned short)58762;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
