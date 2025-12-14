#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5012692492806956969ULL;
unsigned int var_8 = 2177177205U;
int var_9 = -944009997;
signed char var_10 = (signed char)-102;
unsigned long long int var_17 = 8476225924952787579ULL;
int zero = 0;
signed char var_18 = (signed char)-13;
signed char var_19 = (signed char)-61;
int var_20 = 1174404923;
signed char var_21 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
