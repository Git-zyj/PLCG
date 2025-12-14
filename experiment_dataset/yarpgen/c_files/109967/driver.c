#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)113;
unsigned char var_6 = (unsigned char)203;
unsigned char var_7 = (unsigned char)50;
unsigned short var_9 = (unsigned short)29435;
int var_10 = -577408298;
unsigned short var_11 = (unsigned short)10470;
unsigned int var_12 = 3985155053U;
int var_13 = 927149305;
int zero = 0;
long long int var_14 = 5650124155156423481LL;
unsigned char var_15 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
