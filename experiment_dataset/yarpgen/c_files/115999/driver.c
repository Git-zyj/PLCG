#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51401;
long long int var_3 = -8660012856845150442LL;
_Bool var_4 = (_Bool)0;
int var_5 = 1139561852;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-17517;
int zero = 0;
unsigned short var_10 = (unsigned short)63607;
signed char var_11 = (signed char)44;
unsigned long long int var_12 = 8483177955320849946ULL;
unsigned char var_13 = (unsigned char)85;
signed char var_14 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
