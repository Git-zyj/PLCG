#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2364581181U;
_Bool var_1 = (_Bool)0;
unsigned short var_8 = (unsigned short)39309;
int var_10 = -751073216;
int zero = 0;
unsigned long long int var_14 = 2610712388252493417ULL;
int var_15 = -1331221247;
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
