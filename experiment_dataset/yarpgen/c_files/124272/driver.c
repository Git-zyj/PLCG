#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)23;
unsigned short var_5 = (unsigned short)17832;
short var_6 = (short)-27689;
short var_7 = (short)-8715;
short var_8 = (short)-7245;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-112;
int zero = 0;
short var_15 = (short)-17527;
unsigned int var_16 = 3676138605U;
int var_17 = 318448589;
short var_18 = (short)-30709;
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
