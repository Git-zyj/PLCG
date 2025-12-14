#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)888;
unsigned short var_1 = (unsigned short)2769;
signed char var_2 = (signed char)21;
unsigned int var_9 = 3977857231U;
int var_11 = 1482698925;
int zero = 0;
int var_12 = 2137995383;
int var_13 = -1481003073;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
