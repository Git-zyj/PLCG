#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14904647797495795737ULL;
signed char var_4 = (signed char)-102;
unsigned int var_5 = 2074764502U;
unsigned int var_8 = 3545839462U;
unsigned char var_10 = (unsigned char)23;
unsigned short var_11 = (unsigned short)62131;
signed char var_15 = (signed char)-9;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
signed char var_18 = (signed char)117;
int var_19 = 31513491;
signed char var_20 = (signed char)87;
void init() {
}

void checksum() {
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
