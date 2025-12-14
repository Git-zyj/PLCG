#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2841974636009522641LL;
_Bool var_2 = (_Bool)0;
unsigned short var_7 = (unsigned short)4960;
signed char var_10 = (signed char)116;
int zero = 0;
int var_12 = 2139128064;
unsigned long long int var_13 = 10503674000594792304ULL;
unsigned short var_14 = (unsigned short)37027;
void init() {
}

void checksum() {
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
