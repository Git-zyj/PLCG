#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24693;
unsigned char var_13 = (unsigned char)96;
unsigned long long int var_17 = 11033716006263842749ULL;
unsigned char var_18 = (unsigned char)8;
int zero = 0;
unsigned long long int var_20 = 1436685520397035049ULL;
signed char var_21 = (signed char)-74;
short var_22 = (short)5733;
_Bool var_23 = (_Bool)1;
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
