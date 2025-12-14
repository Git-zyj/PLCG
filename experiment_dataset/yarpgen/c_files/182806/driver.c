#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24570;
unsigned short var_2 = (unsigned short)35495;
unsigned short var_3 = (unsigned short)3257;
unsigned char var_4 = (unsigned char)144;
unsigned long long int var_5 = 8314319954610054629ULL;
int var_6 = -2098275830;
short var_9 = (short)23831;
short var_10 = (short)-15159;
int var_13 = -1157292268;
unsigned short var_15 = (unsigned short)61309;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-953;
unsigned long long int var_19 = 5383312052905286403ULL;
int var_20 = 1748696294;
short var_21 = (short)2378;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
