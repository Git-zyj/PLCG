#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 119859347;
unsigned short var_3 = (unsigned short)21393;
unsigned long long int var_4 = 13485940168009287883ULL;
unsigned long long int var_7 = 18067716329035891825ULL;
unsigned short var_8 = (unsigned short)36530;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)119;
unsigned long long int var_11 = 7034631544565202987ULL;
short var_12 = (short)17379;
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
