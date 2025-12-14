#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 849084964;
unsigned short var_12 = (unsigned short)49963;
unsigned short var_14 = (unsigned short)21734;
int zero = 0;
int var_19 = -863520378;
unsigned short var_20 = (unsigned short)53689;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
