#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
unsigned short var_1 = (unsigned short)780;
short var_2 = (short)6053;
short var_4 = (short)-6859;
signed char var_6 = (signed char)127;
unsigned char var_7 = (unsigned char)115;
unsigned short var_10 = (unsigned short)19622;
unsigned char var_11 = (unsigned char)245;
short var_13 = (short)10755;
unsigned char var_14 = (unsigned char)175;
unsigned long long int var_16 = 17352728053981215447ULL;
unsigned long long int var_18 = 5701570258787979686ULL;
int zero = 0;
short var_20 = (short)-13079;
unsigned long long int var_21 = 11829235122364919997ULL;
unsigned short var_22 = (unsigned short)44775;
unsigned long long int var_23 = 3471528849020071958ULL;
unsigned long long int var_24 = 16876821076258317357ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
