#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 96752044;
unsigned long long int var_1 = 13328821266500495382ULL;
int var_2 = 352519028;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 5514840273292185234ULL;
unsigned long long int var_8 = 8897735453136024647ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 13016688642225887993ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
