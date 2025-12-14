#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31605;
int var_5 = 1707702962;
unsigned short var_6 = (unsigned short)29564;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 15724909575493778090ULL;
unsigned short var_11 = (unsigned short)56002;
unsigned long long int var_12 = 1534843475169973492ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 11159084084633300481ULL;
unsigned int var_17 = 3275579152U;
void init() {
}

void checksum() {
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
