#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18651;
unsigned int var_9 = 4190239515U;
long long int var_12 = 2466376418250334003LL;
signed char var_14 = (signed char)-71;
long long int var_16 = 8471715032541334093LL;
int zero = 0;
signed char var_20 = (signed char)-16;
unsigned char var_21 = (unsigned char)231;
short var_22 = (short)-2461;
unsigned char var_23 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
