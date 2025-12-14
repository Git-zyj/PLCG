#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6786302346263572484LL;
unsigned long long int var_4 = 2316999351242690519ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)56;
long long int var_11 = -2231001476726310662LL;
unsigned int var_12 = 2926074978U;
signed char var_13 = (signed char)-107;
signed char var_14 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
