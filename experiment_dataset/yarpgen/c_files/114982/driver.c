#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10733;
int var_3 = -956005248;
unsigned int var_5 = 3906395602U;
unsigned int var_7 = 2829466689U;
long long int var_9 = 5177328947124652335LL;
int zero = 0;
short var_10 = (short)5779;
unsigned int var_11 = 3210113441U;
unsigned int var_12 = 663761206U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
