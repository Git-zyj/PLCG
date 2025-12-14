#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
unsigned char var_2 = (unsigned char)227;
unsigned short var_4 = (unsigned short)23870;
long long int var_8 = -4457194374442342570LL;
long long int var_11 = 4769193583876206945LL;
unsigned short var_12 = (unsigned short)2282;
long long int var_13 = 3049956784575208131LL;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)63378;
int zero = 0;
unsigned char var_18 = (unsigned char)126;
unsigned short var_19 = (unsigned short)23720;
unsigned char var_20 = (unsigned char)56;
long long int var_21 = 318781060302113555LL;
_Bool var_22 = (_Bool)0;
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
