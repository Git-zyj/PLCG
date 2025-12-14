#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)22570;
int var_4 = 1125579058;
signed char var_6 = (signed char)-40;
signed char var_8 = (signed char)-13;
short var_9 = (short)-29183;
signed char var_10 = (signed char)23;
short var_12 = (short)-20248;
unsigned int var_13 = 2959009202U;
unsigned char var_14 = (unsigned char)114;
unsigned int var_15 = 1431935987U;
int zero = 0;
signed char var_17 = (signed char)-88;
_Bool var_18 = (_Bool)1;
short var_19 = (short)3751;
signed char var_20 = (signed char)106;
void init() {
}

void checksum() {
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
