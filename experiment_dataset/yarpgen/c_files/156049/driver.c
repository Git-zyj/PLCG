#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10705;
long long int var_5 = 3949703982626628850LL;
unsigned short var_11 = (unsigned short)61487;
unsigned int var_12 = 3430992508U;
unsigned long long int var_16 = 3224702447739770744ULL;
long long int var_17 = -6979873977250059274LL;
int zero = 0;
unsigned short var_19 = (unsigned short)8551;
unsigned int var_20 = 3774793252U;
unsigned short var_21 = (unsigned short)20939;
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
