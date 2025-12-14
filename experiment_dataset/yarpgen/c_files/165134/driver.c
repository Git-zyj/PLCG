#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7071912214828223492LL;
signed char var_1 = (signed char)-65;
short var_2 = (short)-16811;
_Bool var_3 = (_Bool)1;
short var_7 = (short)-27263;
unsigned int var_8 = 3274964463U;
long long int var_10 = -1633110381329943981LL;
int zero = 0;
unsigned char var_13 = (unsigned char)233;
unsigned int var_14 = 654820651U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
