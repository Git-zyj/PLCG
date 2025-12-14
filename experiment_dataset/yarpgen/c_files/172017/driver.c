#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1743045763U;
short var_2 = (short)1925;
unsigned short var_4 = (unsigned short)52573;
short var_5 = (short)24706;
short var_7 = (short)20459;
short var_8 = (short)-17983;
signed char var_12 = (signed char)108;
signed char var_13 = (signed char)-22;
int zero = 0;
signed char var_15 = (signed char)52;
short var_16 = (short)6024;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)11;
unsigned short var_19 = (unsigned short)7503;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
