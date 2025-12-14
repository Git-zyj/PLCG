#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23733;
int var_7 = -746538768;
unsigned short var_8 = (unsigned short)26961;
int var_10 = -1633458571;
int zero = 0;
long long int var_13 = -8858491043870533338LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
