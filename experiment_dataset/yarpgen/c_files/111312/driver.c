#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
long long int var_5 = -2117767595365939437LL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-32597;
int var_9 = -934897014;
signed char var_13 = (signed char)-99;
short var_15 = (short)-20897;
int zero = 0;
unsigned int var_16 = 2437648890U;
unsigned char var_17 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
