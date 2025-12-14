#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2427881533U;
_Bool var_3 = (_Bool)0;
long long int var_4 = -2727433211630178334LL;
_Bool var_5 = (_Bool)0;
int var_7 = -180435989;
long long int var_8 = -3376098763615427405LL;
int zero = 0;
unsigned long long int var_11 = 1515978693618472717ULL;
short var_12 = (short)31438;
short var_13 = (short)7628;
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
