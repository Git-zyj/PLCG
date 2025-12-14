#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1866982633U;
unsigned char var_3 = (unsigned char)8;
unsigned long long int var_4 = 7635543030160539040ULL;
unsigned int var_5 = 3093007963U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 3600051476U;
short var_12 = (short)-25767;
unsigned short var_13 = (unsigned short)2252;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
