#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)94;
unsigned long long int var_12 = 13090551667253227100ULL;
unsigned int var_13 = 2574163559U;
unsigned int var_14 = 3593527311U;
unsigned long long int var_15 = 17508214846398102954ULL;
int zero = 0;
int var_16 = 1201093598;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
