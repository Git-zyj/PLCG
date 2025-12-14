#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -845872829;
unsigned long long int var_1 = 2790220580328027458ULL;
signed char var_5 = (signed char)-61;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 15420161732512743405ULL;
unsigned char var_10 = (unsigned char)198;
_Bool var_11 = (_Bool)0;
signed char var_16 = (signed char)-125;
int zero = 0;
unsigned char var_17 = (unsigned char)49;
unsigned int var_18 = 2159207996U;
void init() {
}

void checksum() {
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
