#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2450;
unsigned short var_3 = (unsigned short)36556;
signed char var_4 = (signed char)77;
unsigned short var_5 = (unsigned short)12210;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 3680196027U;
unsigned short var_11 = (unsigned short)13178;
long long int var_12 = 8772434426610491663LL;
short var_13 = (short)-21422;
signed char var_14 = (signed char)-26;
unsigned short var_17 = (unsigned short)41534;
int zero = 0;
unsigned int var_18 = 1856626503U;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-127;
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
