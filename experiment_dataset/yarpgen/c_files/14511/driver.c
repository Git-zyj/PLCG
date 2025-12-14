#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_4 = (short)610;
_Bool var_5 = (_Bool)1;
int var_9 = -265738800;
unsigned long long int var_11 = 6305309132711613407ULL;
short var_14 = (short)-703;
unsigned long long int var_16 = 3089554228307867743ULL;
int zero = 0;
unsigned long long int var_18 = 2981633021939901853ULL;
unsigned short var_19 = (unsigned short)39173;
void init() {
}

void checksum() {
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
