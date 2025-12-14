#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35693;
_Bool var_2 = (_Bool)0;
unsigned long long int var_13 = 7752878544769161974ULL;
short var_14 = (short)-7819;
int var_16 = -339734724;
short var_18 = (short)7254;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -488369412;
signed char var_22 = (signed char)0;
signed char var_23 = (signed char)75;
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
