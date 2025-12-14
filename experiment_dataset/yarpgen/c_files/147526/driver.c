#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15270254813395375407ULL;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-1664;
signed char var_3 = (signed char)99;
unsigned short var_4 = (unsigned short)35936;
short var_6 = (short)10409;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-75;
int zero = 0;
short var_10 = (short)30252;
signed char var_11 = (signed char)-20;
int var_12 = -1224178258;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
