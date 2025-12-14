#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24991;
unsigned char var_4 = (unsigned char)39;
unsigned short var_5 = (unsigned short)33290;
unsigned long long int var_6 = 18096639623823347093ULL;
unsigned short var_7 = (unsigned short)296;
signed char var_8 = (signed char)-31;
unsigned long long int var_10 = 15422112516911602716ULL;
unsigned short var_11 = (unsigned short)44858;
unsigned long long int var_12 = 16674948091058326899ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)8425;
unsigned short var_19 = (unsigned short)58687;
short var_20 = (short)-32474;
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
