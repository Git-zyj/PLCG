#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
short var_1 = (short)3440;
int var_2 = 2057995403;
short var_4 = (short)1175;
short var_6 = (short)14731;
unsigned int var_8 = 1302606070U;
unsigned char var_10 = (unsigned char)11;
unsigned char var_11 = (unsigned char)167;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)10987;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-10842;
signed char var_18 = (signed char)-86;
short var_19 = (short)-4937;
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
