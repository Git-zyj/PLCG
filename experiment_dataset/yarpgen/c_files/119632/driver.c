#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 930280677U;
signed char var_6 = (signed char)123;
unsigned char var_7 = (unsigned char)97;
short var_8 = (short)-1247;
unsigned short var_10 = (unsigned short)33054;
unsigned short var_11 = (unsigned short)25660;
int zero = 0;
unsigned short var_13 = (unsigned short)41426;
long long int var_14 = -8932040153935513503LL;
unsigned char var_15 = (unsigned char)14;
long long int var_16 = -149516544070271007LL;
unsigned char var_17 = (unsigned char)84;
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
