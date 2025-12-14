#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)88;
unsigned int var_4 = 2460801128U;
unsigned long long int var_7 = 9541836172018865585ULL;
int zero = 0;
short var_17 = (short)7812;
int var_18 = -1411728447;
long long int var_19 = -6624191636449305770LL;
void init() {
}

void checksum() {
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
