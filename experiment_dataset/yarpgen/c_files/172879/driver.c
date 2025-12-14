#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = -1686415900;
short var_14 = (short)20943;
int zero = 0;
unsigned char var_20 = (unsigned char)174;
unsigned int var_21 = 3660860237U;
unsigned short var_22 = (unsigned short)11129;
unsigned char var_23 = (unsigned char)218;
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
