#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)30926;
unsigned int var_10 = 815030224U;
unsigned short var_12 = (unsigned short)52946;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 238668019;
signed char var_15 = (signed char)92;
unsigned long long int var_16 = 4384225687146971335ULL;
unsigned long long int var_17 = 11538024927753582052ULL;
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
