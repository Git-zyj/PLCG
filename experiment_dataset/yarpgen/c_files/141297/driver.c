#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6385454209109747530ULL;
int var_3 = -1062348856;
unsigned long long int var_4 = 5315014521914982994ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 2004687636895001094ULL;
signed char var_9 = (signed char)(-127 - 1);
long long int var_10 = 3968569210083303543LL;
int zero = 0;
unsigned int var_11 = 4257747604U;
short var_12 = (short)-31539;
unsigned short var_13 = (unsigned short)15647;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
