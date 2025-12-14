#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11800450013236491716ULL;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)-48;
int var_12 = 1687380408;
short var_15 = (short)-23162;
int zero = 0;
int var_16 = -545514937;
long long int var_17 = 3327627591668848539LL;
short var_18 = (short)3651;
void init() {
}

void checksum() {
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
