#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36088;
signed char var_2 = (signed char)91;
unsigned int var_3 = 2996410323U;
unsigned int var_4 = 388287557U;
unsigned short var_5 = (unsigned short)17762;
unsigned int var_6 = 2276009207U;
unsigned int var_9 = 3653061122U;
int zero = 0;
int var_10 = -1862345281;
short var_11 = (short)30805;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
