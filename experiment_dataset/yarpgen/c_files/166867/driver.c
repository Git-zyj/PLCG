#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned char var_1 = (unsigned char)6;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_10 = (unsigned char)88;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)139;
unsigned char var_16 = (unsigned char)14;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
