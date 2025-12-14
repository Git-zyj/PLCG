#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_7 = 4166538083U;
int var_11 = 518799550;
int zero = 0;
int var_12 = 463838177;
_Bool var_13 = (_Bool)1;
long long int var_14 = -7475853269409438745LL;
int var_15 = -216645655;
unsigned short var_16 = (unsigned short)49666;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
