#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)9;
unsigned int var_3 = 2641050448U;
unsigned int var_10 = 2954552191U;
unsigned int var_11 = 1021043159U;
unsigned char var_13 = (unsigned char)179;
unsigned int var_15 = 3333924469U;
int zero = 0;
unsigned int var_17 = 1503270629U;
unsigned int var_18 = 239045139U;
unsigned int var_19 = 1661850527U;
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
