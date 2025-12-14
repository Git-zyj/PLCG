#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20681;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 17881711227352412495ULL;
int var_11 = 1610197398;
unsigned char var_14 = (unsigned char)135;
int zero = 0;
unsigned char var_15 = (unsigned char)130;
unsigned short var_16 = (unsigned short)20966;
short var_17 = (short)-32600;
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
