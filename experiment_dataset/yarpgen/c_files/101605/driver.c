#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -6599316761688819130LL;
long long int var_7 = 3632032577905206271LL;
long long int var_9 = -2297724850245826856LL;
int var_13 = -1920396498;
int zero = 0;
short var_15 = (short)14052;
unsigned long long int var_16 = 17021982082675929871ULL;
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
