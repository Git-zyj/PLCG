#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1797143617U;
unsigned char var_7 = (unsigned char)151;
_Bool var_8 = (_Bool)1;
unsigned int var_14 = 2934255902U;
unsigned int var_16 = 4224393998U;
int zero = 0;
unsigned int var_20 = 1334705141U;
unsigned char var_21 = (unsigned char)247;
unsigned int var_22 = 2534828423U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
