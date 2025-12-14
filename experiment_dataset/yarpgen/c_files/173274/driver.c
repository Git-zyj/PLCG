#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1406805191;
unsigned short var_3 = (unsigned short)36479;
unsigned short var_5 = (unsigned short)13829;
unsigned int var_6 = 2551444754U;
unsigned short var_7 = (unsigned short)56350;
long long int var_8 = -7833133438958754462LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)44711;
unsigned short var_12 = (unsigned short)29233;
signed char var_13 = (signed char)-99;
int zero = 0;
unsigned short var_14 = (unsigned short)59011;
unsigned short var_15 = (unsigned short)51929;
unsigned short var_16 = (unsigned short)45728;
signed char var_17 = (signed char)28;
unsigned char var_18 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
