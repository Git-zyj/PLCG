#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)486;
long long int var_7 = -1465184233867149058LL;
unsigned long long int var_8 = 3946195643805093038ULL;
signed char var_10 = (signed char)-106;
long long int var_13 = -2244092058991712097LL;
int zero = 0;
unsigned char var_15 = (unsigned char)117;
unsigned char var_16 = (unsigned char)253;
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
