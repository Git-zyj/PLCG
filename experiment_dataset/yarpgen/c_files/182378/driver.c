#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 6862045590732911671ULL;
unsigned char var_12 = (unsigned char)233;
int zero = 0;
signed char var_20 = (signed char)122;
int var_21 = -1718134746;
unsigned long long int var_22 = 14624636675523934647ULL;
void init() {
}

void checksum() {
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
