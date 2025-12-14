#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -941120148;
short var_3 = (short)10326;
long long int var_5 = 5952039717538290284LL;
long long int var_7 = 3027252431537925257LL;
signed char var_10 = (signed char)-7;
long long int var_11 = 5002129663984398219LL;
long long int var_12 = -4892174752519755590LL;
int zero = 0;
unsigned short var_14 = (unsigned short)41909;
long long int var_15 = -7572666841120202426LL;
unsigned char var_16 = (unsigned char)131;
unsigned char var_17 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
