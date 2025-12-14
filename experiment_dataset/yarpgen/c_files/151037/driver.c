#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1310746802U;
unsigned int var_12 = 576103006U;
signed char var_17 = (signed char)99;
int zero = 0;
unsigned long long int var_18 = 4348337715927094358ULL;
unsigned long long int var_19 = 1004541331753027898ULL;
unsigned int var_20 = 3953985944U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
