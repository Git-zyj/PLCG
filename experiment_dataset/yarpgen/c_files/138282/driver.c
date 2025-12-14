#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28627;
unsigned int var_2 = 4190009138U;
signed char var_4 = (signed char)-116;
unsigned short var_5 = (unsigned short)54391;
unsigned long long int var_6 = 1226644715544096288ULL;
unsigned long long int var_7 = 11702920020224186767ULL;
unsigned int var_8 = 1526417285U;
unsigned short var_9 = (unsigned short)10915;
int var_12 = -626080239;
unsigned char var_13 = (unsigned char)219;
unsigned long long int var_14 = 12771970611471677451ULL;
unsigned int var_15 = 1472359547U;
int zero = 0;
unsigned int var_16 = 899974854U;
signed char var_17 = (signed char)-63;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
