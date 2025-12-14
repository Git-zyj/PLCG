#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3253220713662393181LL;
long long int var_9 = -7123517454240688627LL;
unsigned int var_14 = 1633315512U;
int zero = 0;
short var_16 = (short)-7102;
short var_17 = (short)29954;
unsigned int var_18 = 3362578707U;
short var_19 = (short)16744;
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
