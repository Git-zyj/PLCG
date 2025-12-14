#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)0;
unsigned char var_4 = (unsigned char)130;
unsigned char var_6 = (unsigned char)179;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)83;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)207;
unsigned char var_17 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
