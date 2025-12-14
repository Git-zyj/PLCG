#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 2689411643U;
long long int var_4 = -6527270367899293431LL;
signed char var_5 = (signed char)67;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 2998405781U;
unsigned int var_13 = 1261593394U;
int zero = 0;
unsigned int var_14 = 1499497627U;
unsigned short var_15 = (unsigned short)57223;
unsigned long long int var_16 = 2238824882291051385ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
