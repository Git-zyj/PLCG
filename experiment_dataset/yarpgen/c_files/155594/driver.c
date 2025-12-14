#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 325376629U;
unsigned char var_1 = (unsigned char)250;
_Bool var_3 = (_Bool)0;
signed char var_9 = (signed char)42;
unsigned int var_11 = 1249014527U;
long long int var_12 = -5299865956180104068LL;
unsigned short var_13 = (unsigned short)42573;
unsigned int var_14 = 628776041U;
int zero = 0;
int var_15 = 1712217090;
short var_16 = (short)-28175;
unsigned char var_17 = (unsigned char)108;
void init() {
}

void checksum() {
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
