#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 750105971U;
unsigned char var_5 = (unsigned char)128;
_Bool var_10 = (_Bool)0;
short var_11 = (short)20416;
int zero = 0;
signed char var_12 = (signed char)-13;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-59;
unsigned char var_15 = (unsigned char)85;
unsigned short var_16 = (unsigned short)17325;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
