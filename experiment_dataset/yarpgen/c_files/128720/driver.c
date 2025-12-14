#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)56258;
unsigned char var_7 = (unsigned char)62;
unsigned char var_10 = (unsigned char)159;
unsigned char var_13 = (unsigned char)131;
int zero = 0;
unsigned int var_17 = 3724665282U;
unsigned int var_18 = 3056714779U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
