#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2100;
unsigned char var_3 = (unsigned char)191;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)54373;
int var_8 = -1432596205;
int var_10 = -1450857807;
_Bool var_11 = (_Bool)0;
int var_13 = -1831498924;
int zero = 0;
unsigned char var_15 = (unsigned char)211;
unsigned short var_16 = (unsigned short)12165;
unsigned char var_17 = (unsigned char)144;
void init() {
}

void checksum() {
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
