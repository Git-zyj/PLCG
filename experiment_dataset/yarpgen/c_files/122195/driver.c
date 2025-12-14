#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 213729961;
unsigned short var_10 = (unsigned short)11614;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)31495;
signed char var_16 = (signed char)-52;
int zero = 0;
long long int var_20 = -6118660725878251197LL;
unsigned char var_21 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
