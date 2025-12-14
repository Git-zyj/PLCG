#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)2405;
unsigned long long int var_6 = 17036005342854758902ULL;
signed char var_8 = (signed char)-42;
_Bool var_11 = (_Bool)1;
short var_15 = (short)-23967;
int zero = 0;
long long int var_17 = -2765550193338735965LL;
short var_18 = (short)-28443;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
