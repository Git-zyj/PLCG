#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)85;
signed char var_3 = (signed char)-83;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)31656;
unsigned int var_13 = 2346114731U;
int zero = 0;
short var_16 = (short)15956;
unsigned char var_17 = (unsigned char)2;
void init() {
}

void checksum() {
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
