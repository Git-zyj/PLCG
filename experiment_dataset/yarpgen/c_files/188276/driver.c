#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
unsigned int var_1 = 1386465783U;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)167;
unsigned int var_9 = 2765040219U;
unsigned int var_11 = 4208931944U;
int var_12 = 1428029594;
short var_13 = (short)13881;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)85;
void init() {
}

void checksum() {
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
