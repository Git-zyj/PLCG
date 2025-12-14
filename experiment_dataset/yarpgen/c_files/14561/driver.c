#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14673218427712995220ULL;
int var_8 = 449588129;
signed char var_11 = (signed char)41;
int zero = 0;
long long int var_14 = -8693779943037369470LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6427849788951155574ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
