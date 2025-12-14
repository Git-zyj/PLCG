#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
signed char var_3 = (signed char)104;
signed char var_4 = (signed char)45;
_Bool var_6 = (_Bool)1;
long long int var_9 = 4323249650684681780LL;
int zero = 0;
long long int var_10 = -3525683949257267299LL;
signed char var_11 = (signed char)-87;
short var_12 = (short)16044;
long long int var_13 = 8797548941392418270LL;
signed char var_14 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
