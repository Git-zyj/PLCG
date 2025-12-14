#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
_Bool var_1 = (_Bool)0;
int var_4 = 789787059;
unsigned int var_5 = 1478441214U;
short var_7 = (short)-28901;
signed char var_8 = (signed char)112;
int zero = 0;
int var_10 = -25738187;
_Bool var_11 = (_Bool)0;
long long int var_12 = -1148011371782835870LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
