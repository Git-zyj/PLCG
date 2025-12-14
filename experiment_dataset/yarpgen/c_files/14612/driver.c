#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 421878875U;
unsigned short var_1 = (unsigned short)22498;
unsigned char var_2 = (unsigned char)2;
int var_4 = 330695446;
unsigned int var_5 = 2388225977U;
unsigned char var_6 = (unsigned char)253;
unsigned long long int var_7 = 13987972764557635537ULL;
unsigned char var_8 = (unsigned char)33;
int var_9 = -242071114;
unsigned int var_11 = 3373197204U;
unsigned int var_13 = 3932065426U;
unsigned int var_14 = 2989927974U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)205;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)12477;
unsigned int var_19 = 1503536225U;
void init() {
}

void checksum() {
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
