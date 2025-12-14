#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3665577617U;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)13019;
unsigned char var_8 = (unsigned char)105;
short var_11 = (short)-4586;
unsigned long long int var_13 = 3688888234619996729ULL;
unsigned int var_14 = 1095804514U;
unsigned short var_16 = (unsigned short)57381;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
