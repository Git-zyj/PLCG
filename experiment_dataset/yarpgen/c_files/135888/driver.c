#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14683;
unsigned int var_2 = 1862338301U;
unsigned int var_5 = 3821011150U;
unsigned int var_6 = 2734477840U;
_Bool var_8 = (_Bool)0;
short var_14 = (short)-12860;
int zero = 0;
int var_15 = 1543459609;
unsigned char var_16 = (unsigned char)199;
unsigned int var_17 = 512403484U;
short var_18 = (short)30455;
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
