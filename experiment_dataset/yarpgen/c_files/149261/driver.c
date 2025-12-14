#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)166;
unsigned long long int var_6 = 16242827855212593783ULL;
unsigned short var_10 = (unsigned short)4500;
int var_12 = 1024066005;
unsigned long long int var_13 = 1890674522137802495ULL;
unsigned int var_14 = 1282947170U;
unsigned long long int var_16 = 6600554503523511850ULL;
int zero = 0;
signed char var_20 = (signed char)49;
int var_21 = 387615418;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
