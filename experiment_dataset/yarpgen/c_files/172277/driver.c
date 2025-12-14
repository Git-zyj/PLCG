#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1919720695276746102LL;
short var_3 = (short)22504;
int var_5 = 9757463;
long long int var_7 = 7878533370415977770LL;
unsigned char var_13 = (unsigned char)145;
int zero = 0;
unsigned long long int var_14 = 1872355726565801513ULL;
int var_15 = 2109132986;
signed char var_16 = (signed char)113;
short var_17 = (short)4005;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
