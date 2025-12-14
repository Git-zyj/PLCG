#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16674290015692020135ULL;
int var_3 = 1528428110;
short var_8 = (short)23387;
unsigned short var_11 = (unsigned short)3453;
int var_15 = 247819429;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-16898;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
