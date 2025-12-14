#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
int var_1 = 790793867;
unsigned short var_3 = (unsigned short)49743;
unsigned long long int var_4 = 15044280188534028987ULL;
short var_5 = (short)15757;
unsigned char var_7 = (unsigned char)132;
unsigned int var_8 = 2278748139U;
unsigned long long int var_11 = 9558834816675195245ULL;
long long int var_12 = 8582765393429773294LL;
unsigned long long int var_13 = 11192331796214125003ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)6642;
long long int var_17 = 9000835375341984723LL;
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
