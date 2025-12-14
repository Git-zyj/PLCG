#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3627930544U;
long long int var_1 = 642317186880360018LL;
signed char var_4 = (signed char)-56;
short var_8 = (short)3150;
unsigned long long int var_11 = 14825099679333825894ULL;
unsigned char var_13 = (unsigned char)182;
unsigned short var_14 = (unsigned short)58706;
signed char var_16 = (signed char)-113;
int zero = 0;
long long int var_20 = 3154846859049757011LL;
short var_21 = (short)27954;
unsigned char var_22 = (unsigned char)105;
short var_23 = (short)28349;
short var_24 = (short)24221;
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
