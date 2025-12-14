#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20831;
long long int var_1 = -5769821433118327879LL;
int var_2 = -1643912633;
unsigned int var_5 = 1523481478U;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)100;
unsigned short var_10 = (unsigned short)50616;
int zero = 0;
int var_13 = -643008660;
unsigned char var_14 = (unsigned char)163;
int var_15 = 1401077551;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
