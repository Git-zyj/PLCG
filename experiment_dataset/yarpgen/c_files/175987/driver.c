#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
long long int var_1 = 6130992678849470232LL;
unsigned long long int var_3 = 15183719104026111259ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)2934;
int zero = 0;
unsigned short var_11 = (unsigned short)48996;
unsigned long long int var_12 = 18061483538890278142ULL;
unsigned long long int var_13 = 5099279403088279332ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
