#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1603957101U;
signed char var_10 = (signed char)-104;
unsigned int var_11 = 1240413369U;
unsigned int var_15 = 349531526U;
int zero = 0;
long long int var_20 = 1825115642676604324LL;
long long int var_21 = -2305349355528540411LL;
signed char var_22 = (signed char)31;
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
