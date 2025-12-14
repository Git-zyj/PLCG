#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)88;
signed char var_4 = (signed char)126;
int var_5 = -1436431165;
signed char var_6 = (signed char)16;
unsigned short var_8 = (unsigned short)27659;
signed char var_11 = (signed char)112;
unsigned int var_12 = 56069467U;
unsigned char var_14 = (unsigned char)175;
short var_15 = (short)-3292;
unsigned int var_16 = 3211485871U;
int zero = 0;
unsigned short var_17 = (unsigned short)54736;
unsigned short var_18 = (unsigned short)20941;
unsigned char var_19 = (unsigned char)154;
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
