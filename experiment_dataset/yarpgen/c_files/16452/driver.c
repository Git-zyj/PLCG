#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)43;
unsigned long long int var_2 = 16486762708533540526ULL;
unsigned char var_14 = (unsigned char)53;
unsigned char var_17 = (unsigned char)34;
unsigned char var_18 = (unsigned char)105;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 1698563256;
unsigned char var_21 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
