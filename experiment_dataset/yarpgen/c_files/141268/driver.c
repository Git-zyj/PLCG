#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-117;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)86;
long long int var_10 = 6000810660498264432LL;
unsigned int var_11 = 3962960394U;
unsigned char var_14 = (unsigned char)118;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)39;
int var_22 = -1433718053;
short var_23 = (short)5846;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
