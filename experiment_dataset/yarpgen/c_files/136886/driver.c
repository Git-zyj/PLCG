#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 512119094U;
unsigned char var_1 = (unsigned char)40;
long long int var_2 = -8856841581151319119LL;
unsigned int var_3 = 3926532749U;
_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)100;
unsigned short var_9 = (unsigned short)43697;
short var_11 = (short)-16346;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
long long int var_14 = 5688158119942179799LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
