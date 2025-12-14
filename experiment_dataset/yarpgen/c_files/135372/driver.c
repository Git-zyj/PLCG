#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 939535373U;
unsigned int var_5 = 3923830488U;
unsigned int var_11 = 3551412411U;
unsigned int var_13 = 1564624733U;
unsigned int var_17 = 775082363U;
int zero = 0;
unsigned int var_19 = 893198487U;
unsigned int var_20 = 2610797341U;
unsigned int var_21 = 2896878886U;
unsigned int var_22 = 1726598966U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
