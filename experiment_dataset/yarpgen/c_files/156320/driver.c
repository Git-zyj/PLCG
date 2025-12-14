#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)234;
signed char var_2 = (signed char)70;
unsigned int var_3 = 3202412351U;
unsigned char var_4 = (unsigned char)226;
int var_5 = 496602231;
unsigned char var_6 = (unsigned char)37;
unsigned int var_7 = 989853098U;
unsigned long long int var_8 = 12953152266318109647ULL;
short var_10 = (short)29826;
unsigned short var_11 = (unsigned short)3923;
unsigned short var_12 = (unsigned short)41440;
unsigned int var_13 = 3939582125U;
signed char var_15 = (signed char)80;
int var_16 = 1480420058;
int zero = 0;
unsigned int var_17 = 735836040U;
int var_18 = -1642515447;
short var_19 = (short)11599;
void init() {
}

void checksum() {
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
