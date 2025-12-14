#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 10236903165724374721ULL;
unsigned long long int var_11 = 972241447982887624ULL;
unsigned short var_12 = (unsigned short)29341;
int var_14 = 1703423741;
int var_15 = -1242919734;
unsigned long long int var_16 = 9119686606541840154ULL;
int zero = 0;
unsigned int var_19 = 1475930961U;
unsigned int var_20 = 1053630798U;
void init() {
}

void checksum() {
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
