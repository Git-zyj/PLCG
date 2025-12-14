#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)1196;
unsigned long long int var_5 = 1641104426181731807ULL;
unsigned char var_6 = (unsigned char)87;
unsigned long long int var_9 = 11405906971337079956ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)196;
_Bool var_13 = (_Bool)1;
int var_14 = -213062984;
short var_15 = (short)8873;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
