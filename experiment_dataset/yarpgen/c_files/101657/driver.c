#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1294149796;
unsigned short var_5 = (unsigned short)45161;
unsigned long long int var_6 = 15014505728805129635ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 4838282334314214668ULL;
unsigned int var_16 = 2902606391U;
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
