#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)-6012;
int var_5 = 1951897608;
short var_8 = (short)-31067;
long long int var_9 = -4129209894678636944LL;
unsigned char var_10 = (unsigned char)188;
unsigned int var_15 = 799874497U;
signed char var_16 = (signed char)-57;
short var_17 = (short)-9985;
int zero = 0;
unsigned short var_18 = (unsigned short)3357;
short var_19 = (short)-31948;
unsigned short var_20 = (unsigned short)492;
void init() {
}

void checksum() {
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
