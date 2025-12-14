#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)62613;
unsigned short var_6 = (unsigned short)17953;
unsigned int var_7 = 1211262373U;
long long int var_8 = -4300312412932173789LL;
unsigned short var_9 = (unsigned short)14357;
int zero = 0;
unsigned short var_12 = (unsigned short)26175;
unsigned int var_13 = 1770095736U;
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
