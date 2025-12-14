#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12678801669535753978ULL;
unsigned long long int var_6 = 9963281521944779597ULL;
short var_7 = (short)23805;
long long int var_8 = 5012624889670512069LL;
int zero = 0;
unsigned char var_15 = (unsigned char)236;
unsigned long long int var_16 = 5974518800008524563ULL;
unsigned int var_17 = 2969549582U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
