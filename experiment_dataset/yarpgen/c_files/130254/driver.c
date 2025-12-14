#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1830515333U;
int var_1 = 202693894;
long long int var_2 = 1562241808901480546LL;
long long int var_3 = 8128531967343031877LL;
unsigned short var_4 = (unsigned short)8373;
long long int var_5 = 8256136628148364390LL;
long long int var_6 = 9120121605300374220LL;
int var_7 = 256259387;
signed char var_8 = (signed char)3;
int zero = 0;
short var_10 = (short)-2409;
unsigned char var_11 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
