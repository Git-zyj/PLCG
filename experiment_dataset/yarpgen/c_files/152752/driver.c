#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12745;
unsigned short var_3 = (unsigned short)34332;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)106;
short var_6 = (short)13328;
unsigned char var_8 = (unsigned char)110;
short var_9 = (short)-17013;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 1120348233;
long long int var_15 = 937138973736789135LL;
unsigned int var_16 = 2263283572U;
unsigned int var_17 = 482773855U;
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
