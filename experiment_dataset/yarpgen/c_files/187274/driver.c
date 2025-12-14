#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3537736560U;
long long int var_12 = 2572162899443960783LL;
int zero = 0;
long long int var_16 = 4449650827045396764LL;
unsigned short var_17 = (unsigned short)61260;
long long int var_18 = -1349440479576499384LL;
signed char var_19 = (signed char)-56;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
