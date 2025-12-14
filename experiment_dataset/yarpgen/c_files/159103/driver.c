#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15875416707028429780ULL;
short var_4 = (short)18500;
long long int var_5 = -1133776773168851640LL;
unsigned short var_7 = (unsigned short)30902;
long long int var_9 = 2234164118610762099LL;
int var_10 = 109388946;
int zero = 0;
int var_11 = -462386113;
signed char var_12 = (signed char)88;
void init() {
}

void checksum() {
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
