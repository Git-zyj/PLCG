#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_5 = -1059677578;
unsigned long long int var_10 = 3585713816560824052ULL;
int var_11 = 1204161089;
int zero = 0;
short var_12 = (short)-8837;
unsigned char var_13 = (unsigned char)36;
unsigned int var_14 = 1823684218U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
