#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26976;
unsigned short var_4 = (unsigned short)15338;
unsigned short var_9 = (unsigned short)41990;
unsigned short var_12 = (unsigned short)11060;
unsigned short var_14 = (unsigned short)21227;
unsigned short var_15 = (unsigned short)62689;
unsigned short var_16 = (unsigned short)22141;
int zero = 0;
unsigned short var_19 = (unsigned short)62702;
unsigned short var_20 = (unsigned short)48923;
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
