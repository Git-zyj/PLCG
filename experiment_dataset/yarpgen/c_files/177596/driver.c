#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2111547204U;
signed char var_1 = (signed char)50;
int var_2 = -691300279;
signed char var_3 = (signed char)-40;
unsigned int var_5 = 186891764U;
unsigned char var_6 = (unsigned char)149;
unsigned char var_10 = (unsigned char)160;
unsigned char var_11 = (unsigned char)82;
short var_12 = (short)8537;
int zero = 0;
unsigned char var_18 = (unsigned char)130;
long long int var_19 = 2060856702563527097LL;
unsigned int var_20 = 3641320423U;
void init() {
}

void checksum() {
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
