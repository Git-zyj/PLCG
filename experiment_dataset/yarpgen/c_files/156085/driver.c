#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)168;
unsigned long long int var_6 = 6549722254274005523ULL;
unsigned short var_7 = (unsigned short)22618;
unsigned long long int var_8 = 11249857417009783389ULL;
unsigned int var_11 = 3561337905U;
int zero = 0;
short var_12 = (short)-14844;
unsigned short var_13 = (unsigned short)44705;
unsigned short var_14 = (unsigned short)4163;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
