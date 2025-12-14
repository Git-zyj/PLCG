#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8834;
unsigned long long int var_1 = 12468359493780585677ULL;
long long int var_5 = -4250197977233379733LL;
signed char var_9 = (signed char)7;
unsigned short var_10 = (unsigned short)56898;
unsigned int var_11 = 58531150U;
unsigned int var_12 = 218868421U;
int var_13 = -899697836;
int zero = 0;
unsigned short var_15 = (unsigned short)33291;
int var_16 = 1838820141;
long long int var_17 = -2319040381427832383LL;
long long int var_18 = -3484744063653491338LL;
signed char var_19 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
