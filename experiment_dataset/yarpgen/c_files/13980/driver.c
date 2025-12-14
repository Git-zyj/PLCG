#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
short var_4 = (short)22799;
short var_6 = (short)7939;
unsigned char var_7 = (unsigned char)209;
unsigned long long int var_9 = 11844819095162715270ULL;
unsigned short var_10 = (unsigned short)11053;
unsigned short var_12 = (unsigned short)36315;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)254;
unsigned long long int var_15 = 14494831519771545729ULL;
short var_16 = (short)-27258;
signed char var_17 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
