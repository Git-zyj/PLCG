#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3703431356U;
signed char var_13 = (signed char)93;
unsigned int var_17 = 157706958U;
signed char var_18 = (signed char)97;
int zero = 0;
long long int var_19 = -7913994789289735089LL;
unsigned char var_20 = (unsigned char)24;
signed char var_21 = (signed char)-81;
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
