#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2681;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)29633;
short var_7 = (short)6873;
short var_8 = (short)-13135;
unsigned int var_9 = 2374307304U;
int zero = 0;
unsigned char var_12 = (unsigned char)227;
unsigned short var_13 = (unsigned short)36553;
unsigned long long int var_14 = 11825596325062424599ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
