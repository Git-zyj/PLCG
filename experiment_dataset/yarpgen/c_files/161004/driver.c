#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1783458686169905407LL;
unsigned short var_5 = (unsigned short)41402;
unsigned long long int var_6 = 8544871605411800844ULL;
int zero = 0;
unsigned int var_11 = 4171574332U;
short var_12 = (short)24000;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
