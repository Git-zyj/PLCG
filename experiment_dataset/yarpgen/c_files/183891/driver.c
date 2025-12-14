#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4141706681U;
int var_1 = 1323592803;
signed char var_2 = (signed char)-27;
long long int var_3 = -5111099984795688188LL;
signed char var_6 = (signed char)12;
long long int var_14 = 4570793789465534710LL;
int zero = 0;
signed char var_15 = (signed char)0;
unsigned int var_16 = 3423251697U;
signed char var_17 = (signed char)-88;
unsigned short var_18 = (unsigned short)37574;
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
