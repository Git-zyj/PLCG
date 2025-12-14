#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44755;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 60338358689107333ULL;
long long int var_4 = 5417073867405933318LL;
long long int var_11 = -8896121129460149497LL;
unsigned int var_12 = 3488981741U;
unsigned int var_13 = 3420378438U;
int zero = 0;
unsigned short var_14 = (unsigned short)31910;
short var_15 = (short)-1076;
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
