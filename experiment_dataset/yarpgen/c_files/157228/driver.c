#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 893065935;
short var_2 = (short)-3982;
unsigned short var_11 = (unsigned short)57181;
int zero = 0;
unsigned short var_13 = (unsigned short)23067;
int var_14 = -2061772312;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
