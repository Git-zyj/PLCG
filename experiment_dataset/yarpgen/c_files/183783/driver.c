#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1723857199;
unsigned long long int var_5 = 4665117334702034891ULL;
int zero = 0;
signed char var_14 = (signed char)109;
signed char var_15 = (signed char)-93;
unsigned int var_16 = 2209287491U;
int var_17 = -924915630;
void init() {
}

void checksum() {
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
