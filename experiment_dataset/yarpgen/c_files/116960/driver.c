#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11616;
int var_6 = -635608548;
unsigned short var_7 = (unsigned short)51877;
short var_10 = (short)19902;
int zero = 0;
int var_14 = -1568176023;
unsigned int var_15 = 3815605884U;
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
