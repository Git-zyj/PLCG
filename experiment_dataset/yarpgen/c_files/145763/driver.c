#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)39596;
short var_6 = (short)17424;
unsigned int var_11 = 3760662956U;
int var_14 = -247061425;
int var_15 = 1245951765;
int zero = 0;
unsigned int var_16 = 1533262139U;
unsigned int var_17 = 668527583U;
short var_18 = (short)30213;
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
