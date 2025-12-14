#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10017;
unsigned short var_12 = (unsigned short)40413;
unsigned short var_14 = (unsigned short)48357;
int zero = 0;
unsigned int var_16 = 959020244U;
short var_17 = (short)-6026;
int var_18 = 355161242;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
