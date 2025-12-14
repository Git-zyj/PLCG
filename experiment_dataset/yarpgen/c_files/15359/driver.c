#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -742603053;
unsigned short var_4 = (unsigned short)9975;
unsigned char var_6 = (unsigned char)210;
short var_8 = (short)-22964;
unsigned char var_11 = (unsigned char)152;
signed char var_15 = (signed char)-84;
short var_16 = (short)1373;
int zero = 0;
short var_17 = (short)27063;
short var_18 = (short)-8039;
void init() {
}

void checksum() {
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
