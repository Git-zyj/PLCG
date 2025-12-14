#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -472186496;
unsigned short var_3 = (unsigned short)17504;
short var_5 = (short)-12131;
int var_6 = -172910996;
unsigned short var_7 = (unsigned short)21179;
long long int var_12 = 6744349722198759284LL;
int zero = 0;
short var_17 = (short)12663;
int var_18 = 666379666;
signed char var_19 = (signed char)-13;
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
