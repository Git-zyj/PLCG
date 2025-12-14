#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54059;
long long int var_1 = -6339603150817855968LL;
unsigned short var_2 = (unsigned short)4049;
unsigned short var_3 = (unsigned short)46745;
long long int var_5 = -8504874955105397263LL;
long long int var_6 = -7587334121575007549LL;
unsigned short var_8 = (unsigned short)56146;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = -2085335906055902183LL;
unsigned short var_11 = (unsigned short)64443;
long long int var_12 = 7098971932107183259LL;
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
