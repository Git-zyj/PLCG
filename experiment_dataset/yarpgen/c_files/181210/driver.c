#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20474;
short var_1 = (short)-21365;
unsigned long long int var_5 = 7027803454666905171ULL;
short var_7 = (short)-3646;
int var_8 = 1175315000;
long long int var_11 = 4192905509851698259LL;
unsigned int var_12 = 276017173U;
short var_13 = (short)-7002;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4973827115073659329ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)65345;
short var_17 = (short)-11143;
void init() {
}

void checksum() {
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
