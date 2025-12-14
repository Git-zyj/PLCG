#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-13796;
signed char var_3 = (signed char)-33;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)36729;
signed char var_7 = (signed char)38;
int var_8 = 609870586;
signed char var_9 = (signed char)117;
short var_11 = (short)14211;
signed char var_12 = (signed char)66;
unsigned char var_13 = (unsigned char)200;
signed char var_15 = (signed char)-108;
int zero = 0;
unsigned int var_16 = 2954669997U;
unsigned short var_17 = (unsigned short)41153;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)75;
signed char var_20 = (signed char)-12;
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
