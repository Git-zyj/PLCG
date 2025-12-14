#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
short var_3 = (short)-19909;
short var_6 = (short)2673;
short var_8 = (short)29271;
unsigned int var_9 = 1002491863U;
long long int var_11 = 6154307091330027686LL;
int zero = 0;
long long int var_13 = -7427423782327026157LL;
short var_14 = (short)5642;
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
