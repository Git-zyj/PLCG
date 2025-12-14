#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)98;
unsigned char var_7 = (unsigned char)73;
unsigned char var_9 = (unsigned char)87;
_Bool var_10 = (_Bool)0;
int var_11 = 1234161699;
unsigned char var_13 = (unsigned char)232;
int var_17 = -1485931276;
int zero = 0;
unsigned short var_19 = (unsigned short)44344;
short var_20 = (short)-24129;
unsigned short var_21 = (unsigned short)46518;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
