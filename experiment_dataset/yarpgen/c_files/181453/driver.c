#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20261;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-83;
short var_5 = (short)19868;
int var_6 = 1951831530;
short var_7 = (short)4157;
signed char var_9 = (signed char)-82;
int var_10 = 1780585741;
int var_11 = -1148407264;
int zero = 0;
long long int var_13 = -3476052632701786371LL;
unsigned short var_14 = (unsigned short)28557;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)252;
int var_17 = -730674851;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
