#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2672599609U;
short var_6 = (short)1810;
signed char var_7 = (signed char)32;
unsigned short var_8 = (unsigned short)107;
short var_13 = (short)32598;
unsigned char var_14 = (unsigned char)88;
unsigned char var_15 = (unsigned char)24;
unsigned short var_16 = (unsigned short)55454;
int zero = 0;
short var_17 = (short)-29043;
short var_18 = (short)-17810;
signed char var_19 = (signed char)-50;
void init() {
}

void checksum() {
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
