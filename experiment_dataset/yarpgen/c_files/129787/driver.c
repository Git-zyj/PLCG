#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)241;
unsigned char var_7 = (unsigned char)237;
unsigned int var_9 = 3290996153U;
unsigned int var_11 = 3048629000U;
unsigned int var_12 = 204243437U;
unsigned char var_15 = (unsigned char)99;
int zero = 0;
unsigned char var_17 = (unsigned char)52;
unsigned int var_18 = 3651351577U;
unsigned char var_19 = (unsigned char)200;
void init() {
}

void checksum() {
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
