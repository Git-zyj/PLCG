#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)86;
signed char var_4 = (signed char)110;
unsigned char var_5 = (unsigned char)62;
long long int var_6 = 7687448589637029897LL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)243;
unsigned char var_13 = (unsigned char)6;
int zero = 0;
unsigned char var_15 = (unsigned char)77;
signed char var_16 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
