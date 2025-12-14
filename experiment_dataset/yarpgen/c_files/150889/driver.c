#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
int var_1 = -80218428;
int var_7 = -644160977;
signed char var_8 = (signed char)-41;
int var_11 = 1049808356;
int zero = 0;
int var_14 = 1050342603;
unsigned int var_15 = 509245255U;
unsigned char var_16 = (unsigned char)74;
unsigned short var_17 = (unsigned short)59324;
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
