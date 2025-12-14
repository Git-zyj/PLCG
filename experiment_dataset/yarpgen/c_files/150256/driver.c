#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1480449593161715823ULL;
unsigned int var_7 = 2021984404U;
unsigned long long int var_14 = 4561923662802139645ULL;
int zero = 0;
unsigned long long int var_15 = 12470262007481378254ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 17215155737233744048ULL;
signed char var_18 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
