#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)2045;
unsigned long long int var_6 = 9787716595776558011ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 247012552U;
int zero = 0;
int var_14 = 631006298;
unsigned char var_15 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
