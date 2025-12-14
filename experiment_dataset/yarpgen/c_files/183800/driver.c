#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)15750;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13674934693563594166ULL;
int var_5 = -785883673;
int var_7 = 1463443815;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_15 = 1467055838;
long long int var_16 = 7315219499706554080LL;
unsigned long long int var_17 = 3028022114922317658ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
