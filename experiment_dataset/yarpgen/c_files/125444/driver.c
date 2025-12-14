#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = 68724471;
unsigned int var_4 = 3926399232U;
signed char var_6 = (signed char)0;
unsigned long long int var_9 = 14336139538884736270ULL;
int zero = 0;
unsigned long long int var_15 = 3397047312480840244ULL;
_Bool var_16 = (_Bool)1;
int var_17 = -61445291;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
