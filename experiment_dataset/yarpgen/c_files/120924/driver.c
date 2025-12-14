#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1161182395192953283ULL;
short var_3 = (short)20686;
int var_5 = -1613275882;
unsigned short var_10 = (unsigned short)31769;
int zero = 0;
unsigned short var_16 = (unsigned short)46467;
unsigned int var_17 = 1776538375U;
unsigned short var_18 = (unsigned short)36767;
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
