#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)239;
unsigned char var_1 = (unsigned char)173;
unsigned int var_3 = 15077743U;
unsigned int var_6 = 1315932041U;
int var_7 = -180909276;
unsigned int var_8 = 2626508165U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 12080077981569556463ULL;
short var_12 = (short)-30336;
short var_13 = (short)-15796;
unsigned short var_14 = (unsigned short)32660;
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
