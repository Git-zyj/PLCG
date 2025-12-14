#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3405961669U;
unsigned int var_2 = 3410789367U;
long long int var_3 = 7238906927152406972LL;
signed char var_4 = (signed char)25;
signed char var_13 = (signed char)99;
_Bool var_15 = (_Bool)1;
signed char var_17 = (signed char)-61;
int zero = 0;
signed char var_19 = (signed char)75;
signed char var_20 = (signed char)97;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
