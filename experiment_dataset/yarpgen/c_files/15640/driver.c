#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9285;
unsigned long long int var_2 = 13586250131449222007ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_11 = (unsigned short)29840;
unsigned long long int var_12 = 125504616764673203ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 513809719;
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
