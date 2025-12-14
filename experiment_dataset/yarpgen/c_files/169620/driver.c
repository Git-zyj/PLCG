#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -175621236;
unsigned int var_2 = 2378396340U;
int var_9 = -2138963148;
int var_13 = 1720383220;
int var_17 = -1790486431;
int var_19 = -24586848;
int zero = 0;
int var_20 = 815473324;
int var_21 = 1975729101;
int var_22 = -1621200860;
void init() {
}

void checksum() {
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
