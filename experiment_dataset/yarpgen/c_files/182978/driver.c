#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23259;
int var_2 = 981422741;
_Bool var_3 = (_Bool)0;
long long int var_8 = 1639228490863802150LL;
int var_9 = -185422715;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)74;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 11661730995476777862ULL;
int zero = 0;
unsigned long long int var_19 = 12312654351934076813ULL;
short var_20 = (short)-13567;
void init() {
}

void checksum() {
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
