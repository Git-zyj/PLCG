#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1751601731U;
unsigned long long int var_4 = 15342681844176390554ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 2487045620U;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -948098383;
void init() {
}

void checksum() {
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
