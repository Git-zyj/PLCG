#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)18014;
unsigned int var_8 = 3076137978U;
unsigned int var_10 = 1681763327U;
unsigned long long int var_13 = 14763392362869879184ULL;
short var_14 = (short)-23842;
short var_16 = (short)30877;
unsigned long long int var_17 = 7880204976512448063ULL;
int zero = 0;
short var_18 = (short)8516;
short var_19 = (short)1731;
void init() {
}

void checksum() {
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
