#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2802929261U;
int var_1 = 1660157329;
short var_2 = (short)-4324;
unsigned int var_6 = 157254611U;
unsigned long long int var_7 = 15330469903908709661ULL;
unsigned char var_8 = (unsigned char)7;
unsigned char var_11 = (unsigned char)16;
short var_14 = (short)-13399;
int zero = 0;
long long int var_15 = 2273933523674930516LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 2723137343655812599ULL;
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
