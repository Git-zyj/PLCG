#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1725073623U;
int var_4 = -105184936;
unsigned int var_6 = 1359457726U;
unsigned short var_11 = (unsigned short)41326;
short var_13 = (short)5861;
int zero = 0;
signed char var_17 = (signed char)-5;
unsigned char var_18 = (unsigned char)16;
long long int var_19 = 2044480629701180544LL;
unsigned char var_20 = (unsigned char)230;
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
