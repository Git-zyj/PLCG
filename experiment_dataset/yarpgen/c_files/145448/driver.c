#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)23357;
short var_2 = (short)20646;
int var_5 = 710111700;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_8 = 6098822859197295922LL;
unsigned char var_11 = (unsigned char)31;
int zero = 0;
long long int var_12 = -792296669930287466LL;
signed char var_13 = (signed char)82;
signed char var_14 = (signed char)-100;
signed char var_15 = (signed char)103;
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
