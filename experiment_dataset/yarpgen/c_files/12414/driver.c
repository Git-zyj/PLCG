#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 2978891634113457367ULL;
int var_4 = 2132113477;
unsigned int var_9 = 3473478740U;
unsigned short var_11 = (unsigned short)30292;
unsigned char var_13 = (unsigned char)29;
short var_15 = (short)-32747;
unsigned long long int var_18 = 10444593065947885217ULL;
int zero = 0;
int var_20 = -1597383889;
signed char var_21 = (signed char)-100;
int var_22 = 949191827;
signed char var_23 = (signed char)35;
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
