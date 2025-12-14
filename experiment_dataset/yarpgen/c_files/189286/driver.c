#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
unsigned short var_2 = (unsigned short)20352;
int var_3 = -786193780;
short var_4 = (short)3824;
unsigned char var_5 = (unsigned char)183;
signed char var_12 = (signed char)47;
unsigned char var_13 = (unsigned char)218;
int zero = 0;
unsigned short var_15 = (unsigned short)58330;
short var_16 = (short)-3784;
unsigned char var_17 = (unsigned char)30;
unsigned short var_18 = (unsigned short)20218;
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
