#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1604303358581245138LL;
unsigned char var_3 = (unsigned char)151;
unsigned char var_4 = (unsigned char)129;
unsigned short var_10 = (unsigned short)21861;
long long int var_11 = 5560449262213578567LL;
int zero = 0;
short var_12 = (short)-18175;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-52;
short var_15 = (short)9961;
void init() {
}

void checksum() {
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
