#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-4;
signed char var_5 = (signed char)-19;
unsigned short var_6 = (unsigned short)59255;
signed char var_8 = (signed char)110;
int zero = 0;
unsigned int var_11 = 4123999933U;
unsigned long long int var_12 = 14769476938275795059ULL;
unsigned long long int var_13 = 14479684945167840701ULL;
short var_14 = (short)11414;
int var_15 = -792262884;
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
