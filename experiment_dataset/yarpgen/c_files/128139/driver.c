#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -145843273;
unsigned int var_3 = 1649396756U;
unsigned long long int var_12 = 10890468660899793652ULL;
signed char var_15 = (signed char)102;
int zero = 0;
signed char var_17 = (signed char)58;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)40174;
unsigned long long int var_20 = 9131268174775748868ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
