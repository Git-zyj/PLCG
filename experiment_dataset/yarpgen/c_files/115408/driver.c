#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = 5802592664076464982LL;
int var_5 = 1483541511;
int var_6 = 1064844028;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-124;
int zero = 0;
unsigned char var_12 = (unsigned char)85;
int var_13 = 823468829;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
