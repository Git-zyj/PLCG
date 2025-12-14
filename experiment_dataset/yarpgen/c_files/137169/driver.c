#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24572;
long long int var_5 = 4805582661143023192LL;
short var_6 = (short)-32589;
unsigned int var_9 = 2233432530U;
long long int var_10 = 3642140799546365658LL;
short var_12 = (short)29056;
signed char var_13 = (signed char)32;
int zero = 0;
unsigned long long int var_15 = 13581289005641732289ULL;
unsigned long long int var_16 = 17578836363205638126ULL;
short var_17 = (short)3455;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
