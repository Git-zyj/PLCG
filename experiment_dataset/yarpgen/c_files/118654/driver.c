#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2054803378;
unsigned short var_5 = (unsigned short)44333;
long long int var_6 = -2146865837378514603LL;
unsigned int var_7 = 2255328521U;
int var_9 = 973520213;
signed char var_13 = (signed char)-98;
unsigned int var_16 = 206626246U;
int zero = 0;
long long int var_18 = -4077001660346041796LL;
int var_19 = 1647636794;
long long int var_20 = 965461203526275737LL;
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
