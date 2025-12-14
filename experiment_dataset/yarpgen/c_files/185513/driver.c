#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-15926;
long long int var_9 = -3962549037514748969LL;
unsigned int var_16 = 4042427494U;
unsigned long long int var_18 = 11475994711946243727ULL;
int zero = 0;
unsigned int var_20 = 1661286388U;
int var_21 = 116314235;
unsigned long long int var_22 = 16352241255200192487ULL;
unsigned short var_23 = (unsigned short)40565;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
