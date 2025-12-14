#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 435025811U;
short var_1 = (short)9600;
unsigned short var_2 = (unsigned short)64265;
unsigned char var_3 = (unsigned char)175;
signed char var_4 = (signed char)3;
unsigned short var_7 = (unsigned short)48983;
_Bool var_8 = (_Bool)0;
long long int var_10 = -7918059413310889912LL;
signed char var_12 = (signed char)6;
int zero = 0;
unsigned short var_14 = (unsigned short)35877;
unsigned short var_15 = (unsigned short)17012;
signed char var_16 = (signed char)2;
unsigned char var_17 = (unsigned char)85;
void init() {
}

void checksum() {
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
