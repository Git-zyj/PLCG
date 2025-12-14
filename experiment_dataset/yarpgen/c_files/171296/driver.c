#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25780;
signed char var_4 = (signed char)-122;
signed char var_8 = (signed char)-48;
signed char var_9 = (signed char)7;
signed char var_10 = (signed char)65;
int zero = 0;
int var_13 = -1723378061;
unsigned int var_14 = 2037471373U;
int var_15 = 1774137982;
void init() {
}

void checksum() {
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
