#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-883;
unsigned short var_2 = (unsigned short)12648;
unsigned int var_5 = 99254114U;
unsigned short var_6 = (unsigned short)60680;
long long int var_7 = -7482329003288866224LL;
int var_8 = 1739049438;
unsigned char var_14 = (unsigned char)253;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = 479518787;
unsigned char var_19 = (unsigned char)7;
unsigned char var_20 = (unsigned char)116;
short var_21 = (short)-13073;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
