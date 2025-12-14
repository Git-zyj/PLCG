#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7149;
short var_3 = (short)25778;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)149;
unsigned char var_8 = (unsigned char)17;
unsigned char var_9 = (unsigned char)87;
unsigned int var_10 = 4003316686U;
int zero = 0;
signed char var_11 = (signed char)14;
int var_12 = -1502783459;
unsigned int var_13 = 38863790U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
