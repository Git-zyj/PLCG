#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)63;
short var_7 = (short)15086;
unsigned int var_11 = 647855586U;
unsigned char var_14 = (unsigned char)218;
int zero = 0;
unsigned short var_17 = (unsigned short)17170;
int var_18 = -578741781;
unsigned char var_19 = (unsigned char)43;
unsigned int var_20 = 1692804157U;
unsigned char var_21 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
