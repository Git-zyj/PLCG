#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2851047665881321988LL;
int var_1 = -624622709;
short var_3 = (short)30507;
unsigned int var_4 = 883397064U;
_Bool var_6 = (_Bool)1;
short var_7 = (short)7260;
int var_9 = -1940902755;
long long int var_10 = 60972242937443413LL;
int zero = 0;
int var_11 = 196928644;
unsigned long long int var_12 = 4080866472572067783ULL;
unsigned int var_13 = 1935892584U;
unsigned int var_14 = 1437267840U;
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
