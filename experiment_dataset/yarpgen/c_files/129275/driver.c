#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6857;
unsigned long long int var_2 = 3287650351468539358ULL;
signed char var_5 = (signed char)-42;
unsigned long long int var_9 = 2216247335961867755ULL;
int var_11 = 859145332;
short var_12 = (short)20124;
short var_19 = (short)-22433;
int zero = 0;
unsigned char var_20 = (unsigned char)72;
unsigned char var_21 = (unsigned char)147;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
