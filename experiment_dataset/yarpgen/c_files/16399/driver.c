#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17111612538619621622ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 5816400622833764447ULL;
unsigned long long int var_6 = 7330323818973254464ULL;
long long int var_8 = -6939303704700796869LL;
unsigned short var_10 = (unsigned short)6631;
short var_11 = (short)24063;
signed char var_12 = (signed char)-100;
signed char var_13 = (signed char)69;
int zero = 0;
long long int var_15 = -2164837584438316110LL;
unsigned int var_16 = 823935330U;
unsigned char var_17 = (unsigned char)239;
unsigned char var_18 = (unsigned char)177;
signed char var_19 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
