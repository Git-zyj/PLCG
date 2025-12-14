#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3293786218U;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 2787574427U;
short var_8 = (short)-15399;
int var_9 = -1780747641;
unsigned long long int var_12 = 12400086724184377896ULL;
int zero = 0;
unsigned long long int var_13 = 5340341872535033078ULL;
short var_14 = (short)-3202;
long long int var_15 = -2153386935140445831LL;
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
