#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)242;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)62084;
unsigned short var_12 = (unsigned short)16431;
signed char var_16 = (signed char)112;
int zero = 0;
int var_20 = -396229455;
int var_21 = 566951641;
int var_22 = 1729338594;
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
