#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2495;
unsigned short var_11 = (unsigned short)52627;
int var_12 = -133397193;
int zero = 0;
unsigned short var_13 = (unsigned short)2100;
unsigned short var_14 = (unsigned short)29855;
int var_15 = 158850945;
unsigned short var_16 = (unsigned short)42318;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
