#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3821740580U;
unsigned long long int var_3 = 4602091509190171031ULL;
_Bool var_4 = (_Bool)0;
int var_8 = -490689008;
int var_11 = -945728144;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 3284799841919844703ULL;
int zero = 0;
unsigned long long int var_14 = 8432416183342782389ULL;
int var_15 = 1081853267;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
