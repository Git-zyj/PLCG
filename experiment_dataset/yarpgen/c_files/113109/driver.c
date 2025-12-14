#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3010967219U;
short var_5 = (short)-12423;
signed char var_7 = (signed char)-120;
unsigned int var_10 = 3322405828U;
int var_12 = 1315853764;
unsigned short var_13 = (unsigned short)17619;
int zero = 0;
signed char var_15 = (signed char)4;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)2569;
unsigned int var_18 = 1707059869U;
void init() {
}

void checksum() {
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
