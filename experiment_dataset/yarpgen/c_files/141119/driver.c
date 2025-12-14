#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18144186786391608633ULL;
unsigned long long int var_1 = 2192907199927135200ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 3944951461U;
signed char var_7 = (signed char)-124;
int var_9 = 1559064234;
int zero = 0;
int var_10 = 125725532;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-70;
unsigned char var_13 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
