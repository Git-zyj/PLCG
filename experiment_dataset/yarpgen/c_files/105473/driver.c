#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-127;
unsigned int var_3 = 1288388927U;
short var_5 = (short)13421;
signed char var_6 = (signed char)-6;
unsigned int var_9 = 1114421108U;
signed char var_10 = (signed char)70;
signed char var_11 = (signed char)-32;
int zero = 0;
signed char var_13 = (signed char)60;
short var_14 = (short)7424;
signed char var_15 = (signed char)-68;
unsigned int var_16 = 2009615793U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
