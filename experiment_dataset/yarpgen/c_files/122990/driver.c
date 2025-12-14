#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -398383328;
unsigned char var_1 = (unsigned char)178;
int var_2 = -50200681;
short var_3 = (short)21339;
unsigned long long int var_4 = 11225498317918822944ULL;
unsigned short var_5 = (unsigned short)36560;
int var_6 = 992948417;
unsigned char var_7 = (unsigned char)66;
unsigned short var_8 = (unsigned short)37853;
int var_9 = 611443336;
unsigned long long int var_10 = 11715106863900583600ULL;
unsigned char var_11 = (unsigned char)190;
int zero = 0;
unsigned long long int var_12 = 6237089243604045759ULL;
unsigned char var_13 = (unsigned char)90;
unsigned char var_14 = (unsigned char)204;
short var_15 = (short)29055;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
