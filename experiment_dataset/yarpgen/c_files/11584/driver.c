#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3477376115704228037LL;
unsigned int var_2 = 1756006103U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 6453765669535058640ULL;
unsigned short var_6 = (unsigned short)46083;
unsigned short var_8 = (unsigned short)28872;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 4918774582230333690LL;
unsigned long long int var_11 = 6373645798320735981ULL;
unsigned char var_12 = (unsigned char)56;
short var_13 = (short)26149;
unsigned int var_14 = 3575772456U;
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
