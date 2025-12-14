#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2191;
unsigned long long int var_4 = 11293705734750197041ULL;
unsigned short var_6 = (unsigned short)544;
short var_7 = (short)28302;
signed char var_10 = (signed char)115;
unsigned int var_11 = 3353026445U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)34395;
int var_18 = -1686825600;
unsigned char var_19 = (unsigned char)255;
signed char var_20 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
