#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-5660;
unsigned char var_10 = (unsigned char)206;
unsigned char var_16 = (unsigned char)87;
int zero = 0;
unsigned int var_19 = 3915002740U;
unsigned short var_20 = (unsigned short)51950;
unsigned long long int var_21 = 16798375665121521072ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
