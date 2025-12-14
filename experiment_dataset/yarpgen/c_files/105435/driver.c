#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -604221227;
int var_5 = 457862564;
_Bool var_7 = (_Bool)0;
short var_9 = (short)6877;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -1438583983;
unsigned long long int var_13 = 1907286680982487724ULL;
long long int var_14 = 1083553660108906360LL;
void init() {
}

void checksum() {
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
