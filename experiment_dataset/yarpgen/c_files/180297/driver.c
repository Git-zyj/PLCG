#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_13 = (unsigned short)52492;
int zero = 0;
unsigned int var_18 = 2056912398U;
long long int var_19 = 3182383218074762329LL;
long long int var_20 = 1512352120262612046LL;
unsigned int var_21 = 3431863933U;
unsigned char var_22 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
