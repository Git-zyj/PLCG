#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53795;
long long int var_1 = -7903963481857049721LL;
unsigned int var_2 = 2469714728U;
long long int var_3 = -7386688445295686034LL;
unsigned short var_5 = (unsigned short)35354;
signed char var_6 = (signed char)-101;
short var_8 = (short)-1918;
int zero = 0;
int var_11 = 1565854294;
unsigned int var_12 = 2514452804U;
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
