#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3543499261U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)93;
unsigned int var_9 = 407225160U;
unsigned char var_10 = (unsigned char)148;
unsigned short var_14 = (unsigned short)56055;
int zero = 0;
unsigned long long int var_16 = 15740413799255650962ULL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
