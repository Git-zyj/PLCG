#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2611425549158212718LL;
_Bool var_1 = (_Bool)0;
unsigned int var_7 = 4289181697U;
int var_10 = 266565490;
int zero = 0;
int var_11 = 399027922;
unsigned long long int var_12 = 12769116839966446176ULL;
short var_13 = (short)-18745;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
