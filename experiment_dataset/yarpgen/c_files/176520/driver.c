#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4119442223U;
long long int var_4 = -1170273311922150638LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_13 = -862889948846591149LL;
short var_14 = (short)-23357;
void init() {
}

void checksum() {
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
