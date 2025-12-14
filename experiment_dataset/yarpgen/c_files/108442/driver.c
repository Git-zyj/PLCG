#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 236268794U;
int var_2 = 350507049;
unsigned char var_3 = (unsigned char)151;
unsigned long long int var_7 = 266556413951653337ULL;
unsigned char var_12 = (unsigned char)3;
short var_14 = (short)-11147;
signed char var_15 = (signed char)56;
int var_17 = -826528355;
int zero = 0;
short var_19 = (short)20318;
unsigned short var_20 = (unsigned short)33836;
_Bool var_21 = (_Bool)0;
int var_22 = 1115887493;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
