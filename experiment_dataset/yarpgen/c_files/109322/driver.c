#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15376;
unsigned int var_2 = 2764296244U;
_Bool var_3 = (_Bool)1;
long long int var_6 = 324148249530942175LL;
signed char var_10 = (signed char)-113;
long long int var_11 = 1708737371239527527LL;
unsigned int var_13 = 2816460901U;
int zero = 0;
unsigned short var_15 = (unsigned short)59275;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)99;
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
