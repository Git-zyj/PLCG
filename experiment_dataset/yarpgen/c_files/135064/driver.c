#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
unsigned short var_1 = (unsigned short)62548;
unsigned short var_2 = (unsigned short)22467;
unsigned int var_5 = 954642590U;
int zero = 0;
unsigned char var_12 = (unsigned char)252;
unsigned short var_13 = (unsigned short)50328;
void init() {
}

void checksum() {
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
