#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2782544100U;
signed char var_1 = (signed char)-102;
short var_6 = (short)-17204;
unsigned char var_8 = (unsigned char)83;
short var_12 = (short)17849;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 6434815032261716192ULL;
int var_16 = -1532306002;
unsigned int var_17 = 3129656815U;
unsigned int var_18 = 276108223U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
