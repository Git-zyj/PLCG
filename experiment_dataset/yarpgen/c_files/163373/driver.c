#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44382;
short var_4 = (short)15925;
unsigned long long int var_5 = 9202389221801357118ULL;
unsigned short var_11 = (unsigned short)28718;
unsigned long long int var_13 = 5772237033617196764ULL;
int zero = 0;
long long int var_18 = -8177021903727210415LL;
int var_19 = -1900559359;
unsigned short var_20 = (unsigned short)24179;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
