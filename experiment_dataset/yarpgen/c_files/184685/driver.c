#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22921;
unsigned short var_9 = (unsigned short)26373;
unsigned short var_11 = (unsigned short)47219;
unsigned long long int var_14 = 1322528130461272294ULL;
int zero = 0;
long long int var_15 = -7915240007315249763LL;
unsigned int var_16 = 1675142288U;
long long int var_17 = -5194195949676955550LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
