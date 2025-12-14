#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63943;
unsigned short var_1 = (unsigned short)687;
unsigned char var_3 = (unsigned char)164;
int zero = 0;
unsigned short var_10 = (unsigned short)36303;
signed char var_11 = (signed char)-16;
signed char var_12 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
