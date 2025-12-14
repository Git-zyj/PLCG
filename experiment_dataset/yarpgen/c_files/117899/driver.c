#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 677349999U;
unsigned int var_2 = 103223852U;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 2980677853U;
unsigned int var_9 = 381153155U;
short var_11 = (short)5069;
unsigned long long int var_12 = 267285069693969970ULL;
unsigned char var_13 = (unsigned char)41;
int zero = 0;
unsigned long long int var_14 = 12989042651756574206ULL;
short var_15 = (short)-11624;
unsigned short var_16 = (unsigned short)52556;
unsigned long long int var_17 = 12232383201013446738ULL;
int var_18 = -444305714;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
