#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1273413831;
unsigned char var_4 = (unsigned char)101;
long long int var_5 = -6016068604489172060LL;
unsigned short var_6 = (unsigned short)48842;
_Bool var_8 = (_Bool)0;
int var_12 = 146295807;
unsigned char var_13 = (unsigned char)235;
int var_18 = 1154083919;
int zero = 0;
unsigned short var_19 = (unsigned short)4354;
unsigned long long int var_20 = 6938218945872648032ULL;
void init() {
}

void checksum() {
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
