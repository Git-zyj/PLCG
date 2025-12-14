#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)-126;
unsigned int var_5 = 4066387295U;
unsigned int var_6 = 3722571424U;
short var_8 = (short)-24645;
short var_10 = (short)-26962;
unsigned char var_11 = (unsigned char)113;
signed char var_14 = (signed char)44;
int zero = 0;
long long int var_18 = 5144800715294652532LL;
unsigned char var_19 = (unsigned char)227;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)96;
unsigned int var_22 = 1803228060U;
unsigned char var_23 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
