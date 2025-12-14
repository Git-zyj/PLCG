#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 945685173;
unsigned int var_3 = 3520870821U;
unsigned short var_7 = (unsigned short)23119;
int zero = 0;
unsigned short var_10 = (unsigned short)39760;
signed char var_11 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
