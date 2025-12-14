#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7930;
unsigned short var_2 = (unsigned short)18640;
unsigned short var_4 = (unsigned short)19634;
short var_5 = (short)23884;
short var_7 = (short)-25935;
unsigned char var_8 = (unsigned char)74;
unsigned int var_9 = 3563076377U;
unsigned int var_12 = 4203104686U;
short var_13 = (short)-15465;
unsigned long long int var_14 = 17736262615915931306ULL;
short var_16 = (short)1012;
unsigned int var_17 = 1037493642U;
unsigned char var_18 = (unsigned char)202;
int zero = 0;
unsigned char var_19 = (unsigned char)96;
unsigned char var_20 = (unsigned char)182;
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
