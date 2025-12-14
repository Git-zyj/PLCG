#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3848553863U;
unsigned int var_8 = 324351206U;
signed char var_13 = (signed char)51;
long long int var_14 = 6517525304046100188LL;
signed char var_15 = (signed char)72;
signed char var_17 = (signed char)5;
int zero = 0;
unsigned int var_18 = 4280515129U;
short var_19 = (short)14461;
void init() {
}

void checksum() {
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
