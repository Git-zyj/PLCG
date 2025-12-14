#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23390;
long long int var_1 = -3423924490239429506LL;
int var_4 = 1648656140;
int var_6 = 1269656386;
int zero = 0;
short var_10 = (short)3086;
long long int var_11 = 1560684965850740757LL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3017446129U;
unsigned short var_14 = (unsigned short)2596;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
