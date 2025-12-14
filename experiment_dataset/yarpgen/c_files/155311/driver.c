#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-57;
signed char var_3 = (signed char)42;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)5;
unsigned char var_9 = (unsigned char)220;
short var_10 = (short)13586;
unsigned short var_12 = (unsigned short)44956;
int zero = 0;
long long int var_15 = -5081248886502810017LL;
int var_16 = -1608094427;
signed char var_17 = (signed char)-23;
int var_18 = -1422174186;
long long int var_19 = -456884664879416637LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
