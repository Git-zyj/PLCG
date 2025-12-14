#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21293;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3888020033U;
short var_5 = (short)-9116;
long long int var_6 = 7683160466966192706LL;
long long int var_9 = -8213353198025052603LL;
int zero = 0;
long long int var_11 = -5235380575157092574LL;
unsigned char var_12 = (unsigned char)65;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)245;
void init() {
}

void checksum() {
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
