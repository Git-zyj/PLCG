#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2044512691;
unsigned char var_3 = (unsigned char)61;
unsigned int var_8 = 858051141U;
unsigned short var_11 = (unsigned short)57024;
unsigned short var_15 = (unsigned short)23356;
unsigned char var_16 = (unsigned char)144;
int zero = 0;
unsigned short var_19 = (unsigned short)12555;
unsigned int var_20 = 75439260U;
long long int var_21 = -9072341134847936294LL;
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
