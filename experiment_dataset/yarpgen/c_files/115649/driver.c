#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4040342974U;
signed char var_5 = (signed char)-42;
unsigned short var_10 = (unsigned short)25908;
unsigned char var_12 = (unsigned char)154;
int zero = 0;
unsigned short var_15 = (unsigned short)24520;
int var_16 = 1825961175;
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
