#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)38029;
unsigned long long int var_6 = 13715441739400174342ULL;
int var_7 = -1732297339;
unsigned short var_12 = (unsigned short)32179;
short var_13 = (short)12002;
int zero = 0;
unsigned int var_19 = 317146739U;
unsigned char var_20 = (unsigned char)163;
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
