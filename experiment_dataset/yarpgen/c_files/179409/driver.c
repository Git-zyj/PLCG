#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1872782908;
unsigned int var_6 = 3612536686U;
int var_7 = 565464437;
unsigned int var_12 = 1544327183U;
int zero = 0;
unsigned short var_14 = (unsigned short)41818;
int var_15 = 2100422998;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
