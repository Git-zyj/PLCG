#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)237;
int var_5 = -1822581656;
short var_8 = (short)13511;
signed char var_10 = (signed char)29;
signed char var_11 = (signed char)-12;
int zero = 0;
unsigned char var_13 = (unsigned char)248;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 53635665700831594ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
