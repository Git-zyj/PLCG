#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11164;
unsigned int var_2 = 2778990634U;
unsigned long long int var_3 = 10307676989414728076ULL;
unsigned int var_4 = 392698418U;
unsigned long long int var_5 = 2348791486056366688ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2662925880U;
unsigned int var_8 = 454748495U;
int var_10 = -318326321;
unsigned int var_11 = 1705620739U;
int zero = 0;
unsigned long long int var_12 = 2450468628706026888ULL;
signed char var_13 = (signed char)2;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
