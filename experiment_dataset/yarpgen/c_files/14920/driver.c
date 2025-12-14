#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1956596227;
signed char var_14 = (signed char)-94;
unsigned int var_18 = 2093349424U;
int zero = 0;
signed char var_19 = (signed char)-69;
long long int var_20 = -2588699086961491896LL;
unsigned long long int var_21 = 4199935095261325698ULL;
unsigned int var_22 = 841326750U;
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
