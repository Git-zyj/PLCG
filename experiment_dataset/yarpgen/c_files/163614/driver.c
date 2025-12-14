#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7704396007690428811ULL;
signed char var_4 = (signed char)-76;
signed char var_8 = (signed char)69;
int zero = 0;
unsigned short var_11 = (unsigned short)1470;
signed char var_12 = (signed char)-20;
signed char var_13 = (signed char)-73;
unsigned int var_14 = 2493618081U;
unsigned long long int var_15 = 11745452831255392071ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
