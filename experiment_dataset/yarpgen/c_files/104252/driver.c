#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4216229706U;
unsigned long long int var_2 = 10013372767979255675ULL;
int var_6 = 476335296;
_Bool var_7 = (_Bool)1;
int var_8 = -2039815865;
unsigned char var_9 = (unsigned char)211;
unsigned long long int var_10 = 2237712405638729067ULL;
long long int var_11 = -477563035472855927LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 841217915651217287LL;
int zero = 0;
unsigned int var_15 = 1666058352U;
unsigned short var_16 = (unsigned short)30713;
int var_17 = 1872372201;
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
