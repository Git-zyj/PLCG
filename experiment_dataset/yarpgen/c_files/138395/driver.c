#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3217530990694229917LL;
unsigned int var_3 = 2061125390U;
signed char var_5 = (signed char)22;
unsigned char var_7 = (unsigned char)66;
unsigned short var_11 = (unsigned short)34288;
int zero = 0;
unsigned char var_12 = (unsigned char)81;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)73;
unsigned char var_15 = (unsigned char)253;
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
