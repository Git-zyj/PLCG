#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-8036;
unsigned char var_6 = (unsigned char)79;
unsigned long long int var_7 = 6947170585693262523ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1989937200U;
unsigned char var_13 = (unsigned char)235;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3334610710U;
int var_16 = 1910805218;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
