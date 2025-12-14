#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 247980387;
unsigned char var_6 = (unsigned char)196;
short var_7 = (short)1073;
signed char var_8 = (signed char)-95;
unsigned long long int var_10 = 3866733179850873116ULL;
signed char var_11 = (signed char)-14;
signed char var_18 = (signed char)105;
unsigned int var_19 = 209357226U;
int zero = 0;
short var_20 = (short)-3350;
unsigned short var_21 = (unsigned short)58512;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
