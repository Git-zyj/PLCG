#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3677514610U;
unsigned int var_7 = 1408851525U;
unsigned long long int var_8 = 12880285153114660332ULL;
short var_9 = (short)-28479;
short var_10 = (short)29798;
int zero = 0;
short var_11 = (short)12854;
short var_12 = (short)18569;
unsigned char var_13 = (unsigned char)197;
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
