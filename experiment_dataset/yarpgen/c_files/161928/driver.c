#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1450788830U;
int var_2 = -797006953;
short var_3 = (short)8737;
unsigned long long int var_5 = 4891259634561307488ULL;
long long int var_10 = -3975338090628304128LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 1315946935U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
