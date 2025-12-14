#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-9;
int var_6 = 1767745937;
unsigned int var_7 = 2048511767U;
unsigned short var_10 = (unsigned short)51951;
unsigned int var_11 = 4026933260U;
int var_12 = -294409415;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)2572;
int var_17 = -129094197;
int zero = 0;
long long int var_20 = 934830671093985450LL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)226;
int var_23 = -98215239;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
