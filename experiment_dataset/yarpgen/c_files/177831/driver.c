#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)165;
short var_5 = (short)-5282;
signed char var_9 = (signed char)-3;
signed char var_10 = (signed char)-27;
unsigned short var_11 = (unsigned short)55138;
unsigned long long int var_13 = 1174617565886712636ULL;
int zero = 0;
unsigned int var_15 = 1513903382U;
long long int var_16 = -6883979016099341690LL;
void init() {
}

void checksum() {
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
