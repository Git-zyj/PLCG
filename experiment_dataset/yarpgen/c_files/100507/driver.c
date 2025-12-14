#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3345128494U;
unsigned char var_3 = (unsigned char)23;
long long int var_4 = 5259833978956308794LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 2666007095304594935ULL;
unsigned short var_8 = (unsigned short)46886;
unsigned long long int var_9 = 2217752487931360760ULL;
unsigned short var_10 = (unsigned short)46876;
int zero = 0;
long long int var_11 = -3469157285382739654LL;
unsigned long long int var_12 = 14435842862038961179ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)15511;
signed char var_15 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
