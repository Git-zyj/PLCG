#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41255;
unsigned short var_4 = (unsigned short)3900;
unsigned short var_5 = (unsigned short)40554;
unsigned char var_6 = (unsigned char)90;
signed char var_8 = (signed char)-104;
unsigned int var_10 = 669527097U;
unsigned char var_11 = (unsigned char)161;
short var_14 = (short)-28976;
int zero = 0;
short var_16 = (short)13902;
_Bool var_17 = (_Bool)1;
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
