#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
unsigned long long int var_1 = 2931703255414855563ULL;
unsigned short var_3 = (unsigned short)63863;
unsigned long long int var_4 = 676243525871708928ULL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-27945;
unsigned char var_8 = (unsigned char)66;
short var_10 = (short)-20840;
int zero = 0;
unsigned short var_11 = (unsigned short)56956;
short var_12 = (short)-27461;
signed char var_13 = (signed char)104;
unsigned int var_14 = 2829910284U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
