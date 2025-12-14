#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16746;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)65;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 15522143552642482677ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_18 = (unsigned short)21517;
int zero = 0;
unsigned char var_20 = (unsigned char)93;
unsigned short var_21 = (unsigned short)53998;
void init() {
}

void checksum() {
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
