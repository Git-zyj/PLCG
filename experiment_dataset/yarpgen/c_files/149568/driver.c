#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13891471370900747348ULL;
unsigned long long int var_4 = 18342318294522233821ULL;
unsigned int var_14 = 194674973U;
unsigned short var_15 = (unsigned short)28272;
short var_16 = (short)14101;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)138;
long long int var_21 = -9116123366575932763LL;
unsigned long long int var_22 = 14807459108164664632ULL;
unsigned long long int var_23 = 12628549499614807298ULL;
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
