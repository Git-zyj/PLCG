#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29385;
short var_4 = (short)7401;
long long int var_7 = -8798172766206391884LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)62;
int zero = 0;
int var_11 = -908858705;
short var_12 = (short)20504;
unsigned int var_13 = 1441442238U;
unsigned long long int var_14 = 2011105214742303211ULL;
int var_15 = 476067426;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
