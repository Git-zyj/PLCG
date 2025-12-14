#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53445;
_Bool var_4 = (_Bool)0;
unsigned int var_10 = 1098252318U;
unsigned int var_12 = 2957158873U;
int zero = 0;
long long int var_13 = -5465953076776560511LL;
unsigned long long int var_14 = 10959593227777989154ULL;
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
