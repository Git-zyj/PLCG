#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3983965266U;
unsigned char var_1 = (unsigned char)197;
unsigned char var_2 = (unsigned char)179;
unsigned int var_5 = 1148416574U;
unsigned int var_6 = 2129745184U;
int zero = 0;
unsigned char var_10 = (unsigned char)33;
unsigned int var_11 = 2119542957U;
unsigned int var_12 = 963089106U;
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
