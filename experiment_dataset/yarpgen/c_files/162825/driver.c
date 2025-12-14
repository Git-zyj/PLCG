#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
short var_1 = (short)30641;
int var_2 = 1001078113;
unsigned char var_4 = (unsigned char)134;
unsigned short var_5 = (unsigned short)40662;
unsigned long long int var_6 = 6123831947469641483ULL;
unsigned int var_7 = 3991552220U;
unsigned long long int var_8 = 11835363986741720061ULL;
signed char var_9 = (signed char)6;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2362259741U;
unsigned int var_12 = 634890565U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
