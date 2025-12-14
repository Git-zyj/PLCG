#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
int var_1 = 312264802;
_Bool var_2 = (_Bool)0;
unsigned char var_9 = (unsigned char)111;
signed char var_11 = (signed char)41;
int zero = 0;
unsigned short var_15 = (unsigned short)56247;
unsigned int var_16 = 2153150602U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
