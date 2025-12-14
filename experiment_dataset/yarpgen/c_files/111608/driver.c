#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)190;
int var_4 = 1324869298;
int var_9 = -591005696;
signed char var_14 = (signed char)98;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 2120652294;
int var_18 = 1578583647;
unsigned long long int var_19 = 2116990710952285311ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
