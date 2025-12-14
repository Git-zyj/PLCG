#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
long long int var_1 = 1203512986944978723LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 15412611097518060822ULL;
unsigned long long int var_6 = 454630672545166078ULL;
short var_7 = (short)-14247;
long long int var_11 = -7980174823205793653LL;
int zero = 0;
unsigned short var_15 = (unsigned short)22685;
signed char var_16 = (signed char)48;
long long int var_17 = -6593370009359662304LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
