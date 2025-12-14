#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 798394625605970252ULL;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)160;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)95;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)70;
void init() {
}

void checksum() {
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
