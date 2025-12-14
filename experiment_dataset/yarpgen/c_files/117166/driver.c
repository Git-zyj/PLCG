#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -988626109871183525LL;
short var_10 = (short)31472;
unsigned long long int var_13 = 3621012655559557880ULL;
signed char var_14 = (signed char)-95;
int zero = 0;
unsigned long long int var_15 = 16086319988002387399ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
