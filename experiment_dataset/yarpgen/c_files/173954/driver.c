#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)24373;
unsigned char var_10 = (unsigned char)34;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)200;
_Bool var_14 = (_Bool)0;
short var_17 = (short)-6960;
unsigned int var_18 = 2351529836U;
int var_19 = 163727711;
int zero = 0;
unsigned char var_20 = (unsigned char)37;
_Bool var_21 = (_Bool)1;
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
