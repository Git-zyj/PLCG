#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2160820620U;
int var_2 = 1715507461;
unsigned int var_4 = 929123167U;
unsigned long long int var_6 = 18175994055537060160ULL;
unsigned short var_7 = (unsigned short)11835;
signed char var_9 = (signed char)-3;
unsigned short var_10 = (unsigned short)13052;
signed char var_12 = (signed char)34;
short var_13 = (short)12658;
int zero = 0;
unsigned long long int var_15 = 7898426947231831950ULL;
unsigned long long int var_16 = 2736365105375976210ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
