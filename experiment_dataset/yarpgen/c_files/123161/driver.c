#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)15;
unsigned short var_2 = (unsigned short)31978;
unsigned long long int var_3 = 11755225166852616067ULL;
unsigned char var_5 = (unsigned char)38;
long long int var_10 = -7106958495085138689LL;
unsigned int var_12 = 2205541970U;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
short var_19 = (short)15110;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
