#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-16;
signed char var_5 = (signed char)-122;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)29;
int zero = 0;
unsigned int var_20 = 1859588045U;
unsigned char var_21 = (unsigned char)177;
void init() {
}

void checksum() {
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
