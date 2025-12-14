#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)56;
unsigned int var_1 = 832675318U;
unsigned char var_2 = (unsigned char)66;
unsigned short var_3 = (unsigned short)30017;
signed char var_5 = (signed char)-86;
unsigned short var_7 = (unsigned short)10657;
signed char var_8 = (signed char)13;
short var_10 = (short)-20823;
unsigned char var_11 = (unsigned char)42;
unsigned char var_13 = (unsigned char)20;
int zero = 0;
unsigned int var_16 = 3141279456U;
unsigned short var_17 = (unsigned short)21598;
unsigned short var_18 = (unsigned short)3702;
short var_19 = (short)-15582;
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
