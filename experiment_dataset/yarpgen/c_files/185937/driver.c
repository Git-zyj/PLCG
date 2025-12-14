#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14205;
unsigned int var_2 = 1923456740U;
long long int var_5 = -1139890623408203080LL;
unsigned short var_7 = (unsigned short)12658;
int zero = 0;
long long int var_10 = 455850359700614382LL;
short var_11 = (short)-14488;
signed char var_12 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
