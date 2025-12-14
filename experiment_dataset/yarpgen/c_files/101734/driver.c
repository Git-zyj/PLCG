#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11817;
int var_2 = 2012705945;
unsigned long long int var_4 = 13586207884046819793ULL;
long long int var_5 = -6071141173626680629LL;
int var_8 = 1673008892;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)31099;
signed char var_11 = (signed char)-69;
unsigned long long int var_12 = 5263682349996707861ULL;
int zero = 0;
short var_13 = (short)-27637;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
