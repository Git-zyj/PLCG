#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2014435808;
unsigned int var_5 = 3332893592U;
unsigned short var_9 = (unsigned short)51978;
int zero = 0;
short var_10 = (short)7292;
signed char var_11 = (signed char)-32;
signed char var_12 = (signed char)60;
signed char var_13 = (signed char)15;
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
