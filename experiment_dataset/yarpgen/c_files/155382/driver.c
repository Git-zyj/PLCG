#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-24114;
unsigned long long int var_6 = 18337469776205210472ULL;
int var_8 = -259980385;
unsigned short var_10 = (unsigned short)46503;
unsigned int var_12 = 3449572987U;
int zero = 0;
unsigned int var_19 = 1978089485U;
unsigned short var_20 = (unsigned short)29246;
short var_21 = (short)18014;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
