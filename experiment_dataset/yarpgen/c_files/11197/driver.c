#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1143939289501153688ULL;
unsigned int var_4 = 688416283U;
unsigned int var_7 = 357837797U;
unsigned short var_11 = (unsigned short)5545;
short var_13 = (short)-30157;
unsigned char var_15 = (unsigned char)126;
unsigned int var_16 = 1097874175U;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
unsigned int var_18 = 198356928U;
unsigned long long int var_19 = 10025255449284691552ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
