#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
short var_1 = (short)-9501;
unsigned int var_6 = 2390790397U;
unsigned char var_8 = (unsigned char)141;
int var_10 = -2095968240;
unsigned short var_12 = (unsigned short)52052;
unsigned short var_13 = (unsigned short)48629;
unsigned short var_15 = (unsigned short)1444;
long long int var_16 = 6517353511984851655LL;
int var_17 = 2110807684;
int zero = 0;
unsigned short var_18 = (unsigned short)18300;
unsigned int var_19 = 627804436U;
short var_20 = (short)-32284;
unsigned char var_21 = (unsigned char)129;
unsigned char var_22 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
