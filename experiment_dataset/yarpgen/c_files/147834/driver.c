#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3511193565615062797ULL;
int var_9 = -396544897;
short var_12 = (short)3558;
unsigned short var_13 = (unsigned short)37511;
int zero = 0;
int var_14 = 1345399036;
unsigned short var_15 = (unsigned short)60028;
unsigned int var_16 = 3214056177U;
void init() {
}

void checksum() {
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
