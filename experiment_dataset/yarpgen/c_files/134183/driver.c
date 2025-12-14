#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20522;
unsigned int var_3 = 2980351262U;
unsigned short var_5 = (unsigned short)3023;
long long int var_7 = -9052408504871490421LL;
int zero = 0;
unsigned long long int var_10 = 12758703346900423493ULL;
unsigned int var_11 = 3134842020U;
short var_12 = (short)-27887;
int var_13 = -1087334344;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
