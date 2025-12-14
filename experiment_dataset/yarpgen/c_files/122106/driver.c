#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1974165101;
short var_2 = (short)-7538;
signed char var_3 = (signed char)-20;
unsigned short var_5 = (unsigned short)29558;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 466770744U;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 1806087489;
unsigned int var_15 = 2772324377U;
unsigned char var_16 = (unsigned char)140;
_Bool var_17 = (_Bool)0;
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
