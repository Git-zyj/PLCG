#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-31235;
unsigned short var_2 = (unsigned short)10775;
unsigned int var_4 = 2301914168U;
signed char var_7 = (signed char)-50;
int var_9 = -856880242;
unsigned short var_10 = (unsigned short)42996;
long long int var_13 = -1735498672971304421LL;
int zero = 0;
unsigned long long int var_16 = 1180545275742950035ULL;
unsigned short var_17 = (unsigned short)57509;
short var_18 = (short)-24343;
unsigned char var_19 = (unsigned char)24;
long long int var_20 = 8763133479758488980LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
