#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
int var_1 = -1470543359;
unsigned char var_2 = (unsigned char)49;
signed char var_4 = (signed char)122;
unsigned int var_8 = 3217213776U;
int var_11 = -1112041208;
int var_14 = -1908082512;
unsigned long long int var_16 = 17476432975763689245ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2895915246U;
unsigned char var_21 = (unsigned char)181;
unsigned char var_22 = (unsigned char)26;
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
