#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4419;
unsigned short var_1 = (unsigned short)11508;
unsigned char var_4 = (unsigned char)36;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-116;
unsigned long long int var_8 = 13513240700295483191ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)30;
unsigned char var_12 = (unsigned char)204;
int var_13 = 1509236951;
int var_14 = 1160206337;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
