#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)56;
unsigned int var_3 = 3171436034U;
short var_8 = (short)-13936;
unsigned short var_12 = (unsigned short)12991;
unsigned short var_13 = (unsigned short)1094;
int zero = 0;
unsigned int var_16 = 1304987746U;
long long int var_17 = -9188843217120545221LL;
signed char var_18 = (signed char)-26;
unsigned char var_19 = (unsigned char)175;
short var_20 = (short)-1609;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
