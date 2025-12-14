#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 952064831U;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)21572;
unsigned int var_5 = 225123375U;
unsigned short var_12 = (unsigned short)23134;
unsigned char var_13 = (unsigned char)36;
int zero = 0;
unsigned long long int var_18 = 15306796966369925813ULL;
_Bool var_19 = (_Bool)1;
int var_20 = 1485383;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
