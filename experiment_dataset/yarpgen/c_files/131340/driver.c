#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12563;
unsigned short var_16 = (unsigned short)23912;
int zero = 0;
unsigned short var_17 = (unsigned short)29410;
unsigned long long int var_18 = 16142688919353936184ULL;
unsigned int var_19 = 4290835941U;
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
