#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3511591217U;
short var_4 = (short)-14149;
signed char var_8 = (signed char)-33;
unsigned int var_9 = 3318013169U;
int var_10 = 1053319339;
signed char var_12 = (signed char)-29;
short var_13 = (short)29207;
unsigned char var_14 = (unsigned char)193;
int var_15 = -1320214233;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)38674;
unsigned short var_18 = (unsigned short)7939;
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
