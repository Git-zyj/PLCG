#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)122;
signed char var_2 = (signed char)88;
int var_5 = 769632435;
unsigned short var_6 = (unsigned short)35385;
int var_7 = -499614425;
unsigned short var_8 = (unsigned short)24653;
unsigned char var_10 = (unsigned char)197;
int zero = 0;
long long int var_12 = 4125169379616417872LL;
short var_13 = (short)-24234;
short var_14 = (short)-1750;
int var_15 = -1919632454;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
