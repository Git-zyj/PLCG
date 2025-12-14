#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)22;
unsigned short var_16 = (unsigned short)50366;
int zero = 0;
unsigned int var_20 = 4012591359U;
unsigned char var_21 = (unsigned char)86;
unsigned short var_22 = (unsigned short)60212;
unsigned char var_23 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
