#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_6 = 14259601498510451393ULL;
signed char var_7 = (signed char)25;
unsigned int var_12 = 3289995273U;
int zero = 0;
int var_13 = 707405804;
unsigned int var_14 = 3057133416U;
unsigned short var_15 = (unsigned short)48362;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
