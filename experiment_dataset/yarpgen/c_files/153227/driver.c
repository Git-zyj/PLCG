#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52198;
int var_4 = 463038996;
unsigned int var_6 = 2393069711U;
unsigned short var_7 = (unsigned short)45275;
signed char var_9 = (signed char)92;
short var_10 = (short)20987;
int var_13 = -1894327078;
unsigned short var_15 = (unsigned short)9584;
signed char var_16 = (signed char)95;
unsigned short var_17 = (unsigned short)10639;
unsigned char var_19 = (unsigned char)183;
int zero = 0;
short var_20 = (short)31745;
unsigned short var_21 = (unsigned short)42644;
unsigned char var_22 = (unsigned char)232;
short var_23 = (short)18691;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
