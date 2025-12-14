#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
short var_6 = (short)1410;
unsigned char var_7 = (unsigned char)12;
unsigned char var_8 = (unsigned char)225;
unsigned char var_10 = (unsigned char)14;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 11940756225008245491ULL;
unsigned int var_20 = 808425461U;
void init() {
}

void checksum() {
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
