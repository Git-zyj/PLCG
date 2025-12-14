#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3518917139U;
signed char var_1 = (signed char)-58;
unsigned long long int var_4 = 5162912570396059159ULL;
unsigned long long int var_11 = 9890581049937914064ULL;
int var_12 = -275744752;
int zero = 0;
long long int var_13 = 7993095149434194640LL;
signed char var_14 = (signed char)109;
unsigned int var_15 = 1666345540U;
int var_16 = 673985207;
long long int var_17 = -7476925128346684883LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
