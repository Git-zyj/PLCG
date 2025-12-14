#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 116841665;
short var_6 = (short)-12948;
unsigned int var_8 = 111134471U;
int zero = 0;
unsigned short var_13 = (unsigned short)2444;
unsigned short var_14 = (unsigned short)40316;
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
