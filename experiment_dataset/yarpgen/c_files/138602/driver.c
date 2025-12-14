#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32086;
unsigned char var_1 = (unsigned char)134;
signed char var_3 = (signed char)-81;
long long int var_8 = -6109842305816643653LL;
unsigned long long int var_10 = 704396442492866764ULL;
unsigned short var_11 = (unsigned short)25710;
unsigned short var_14 = (unsigned short)27146;
short var_16 = (short)12493;
int zero = 0;
long long int var_18 = 2663402220076771162LL;
unsigned short var_19 = (unsigned short)52149;
signed char var_20 = (signed char)-4;
short var_21 = (short)-31300;
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
