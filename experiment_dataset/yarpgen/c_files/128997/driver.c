#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4759520084333882957ULL;
short var_2 = (short)7054;
unsigned char var_4 = (unsigned char)171;
unsigned int var_5 = 1952143176U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 763941626U;
int zero = 0;
unsigned char var_10 = (unsigned char)96;
unsigned long long int var_11 = 7369589319545163888ULL;
unsigned char var_12 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
