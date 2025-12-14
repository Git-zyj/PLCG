#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
signed char var_7 = (signed char)107;
unsigned int var_13 = 82476256U;
unsigned short var_14 = (unsigned short)37786;
int zero = 0;
unsigned short var_18 = (unsigned short)12831;
unsigned short var_19 = (unsigned short)55565;
unsigned long long int var_20 = 9508520804485827584ULL;
void init() {
}

void checksum() {
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
