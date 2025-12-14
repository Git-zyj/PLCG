#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
int var_6 = 1034110031;
unsigned int var_9 = 1466516917U;
unsigned char var_12 = (unsigned char)29;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -46764062;
void init() {
}

void checksum() {
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
