#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4205;
int var_1 = -1401313585;
long long int var_3 = 7176597806324471329LL;
unsigned short var_5 = (unsigned short)58367;
unsigned long long int var_7 = 11805738375534190538ULL;
unsigned short var_9 = (unsigned short)45679;
short var_10 = (short)24762;
int var_13 = 1927691884;
short var_14 = (short)-32673;
int zero = 0;
int var_15 = 492064183;
short var_16 = (short)19340;
signed char var_17 = (signed char)91;
unsigned short var_18 = (unsigned short)61597;
unsigned short var_19 = (unsigned short)23428;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
