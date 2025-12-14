#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
short var_3 = (short)-21742;
signed char var_6 = (signed char)-90;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)16271;
unsigned char var_9 = (unsigned char)90;
short var_12 = (short)19350;
signed char var_14 = (signed char)5;
int zero = 0;
signed char var_15 = (signed char)115;
unsigned short var_16 = (unsigned short)56601;
short var_17 = (short)-25396;
_Bool var_18 = (_Bool)1;
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
