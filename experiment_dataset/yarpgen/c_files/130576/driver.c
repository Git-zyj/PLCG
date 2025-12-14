#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)185;
unsigned char var_4 = (unsigned char)79;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)37;
unsigned char var_11 = (unsigned char)179;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)192;
unsigned char var_14 = (unsigned char)229;
unsigned char var_15 = (unsigned char)174;
unsigned char var_16 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
