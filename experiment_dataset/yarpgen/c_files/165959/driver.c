#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6593229986517650589ULL;
short var_3 = (short)-6800;
long long int var_6 = -4270085496576498255LL;
int var_8 = -1214619310;
unsigned long long int var_9 = 2686863818878232988ULL;
long long int var_12 = -531016942587484425LL;
int zero = 0;
unsigned int var_13 = 814528381U;
short var_14 = (short)7;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
