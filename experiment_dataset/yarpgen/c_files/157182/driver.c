#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)123;
unsigned char var_6 = (unsigned char)120;
unsigned int var_7 = 916339537U;
int var_10 = -1262891721;
unsigned int var_11 = 4131847314U;
int zero = 0;
int var_12 = -395162808;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-122;
unsigned short var_15 = (unsigned short)6005;
void init() {
}

void checksum() {
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
