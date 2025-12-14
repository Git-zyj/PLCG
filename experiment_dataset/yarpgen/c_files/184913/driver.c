#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)11602;
unsigned short var_10 = (unsigned short)62248;
unsigned int var_15 = 3364177475U;
unsigned char var_19 = (unsigned char)27;
int zero = 0;
int var_20 = -723975892;
int var_21 = 1750809237;
signed char var_22 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
