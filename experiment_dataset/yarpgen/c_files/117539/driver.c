#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11170698678583539817ULL;
unsigned char var_7 = (unsigned char)198;
unsigned char var_12 = (unsigned char)191;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 2477500374446107347LL;
short var_16 = (short)31962;
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
