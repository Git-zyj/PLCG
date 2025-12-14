#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29771;
unsigned char var_2 = (unsigned char)132;
unsigned char var_8 = (unsigned char)245;
unsigned int var_9 = 2926528066U;
unsigned char var_11 = (unsigned char)245;
int zero = 0;
int var_14 = 830847130;
int var_15 = 1663095432;
void init() {
}

void checksum() {
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
