#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2504382217143707408LL;
long long int var_1 = -1783770345742118808LL;
unsigned int var_3 = 4047702237U;
unsigned short var_5 = (unsigned short)22336;
int var_6 = -1707651750;
long long int var_10 = 5206577118866606496LL;
int zero = 0;
unsigned char var_11 = (unsigned char)165;
short var_12 = (short)-16619;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
