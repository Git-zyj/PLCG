#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 687680495;
unsigned int var_7 = 655969369U;
int var_13 = -1195921992;
long long int var_17 = 118725422400988600LL;
int zero = 0;
short var_19 = (short)5687;
signed char var_20 = (signed char)-62;
int var_21 = -161456497;
long long int var_22 = -2218017998367653534LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
