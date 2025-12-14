#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)8957;
unsigned char var_12 = (unsigned char)121;
signed char var_13 = (signed char)97;
unsigned short var_14 = (unsigned short)15176;
unsigned short var_18 = (unsigned short)48695;
int zero = 0;
unsigned int var_20 = 3113986116U;
unsigned short var_21 = (unsigned short)60460;
unsigned short var_22 = (unsigned short)1720;
int var_23 = 425268724;
unsigned short var_24 = (unsigned short)33520;
short var_25 = (short)14108;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
