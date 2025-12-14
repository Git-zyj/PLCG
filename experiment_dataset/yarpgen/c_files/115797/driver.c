#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 6923302690773924309LL;
int var_14 = 323468824;
long long int var_16 = 7128443387368956262LL;
int zero = 0;
long long int var_19 = -4939045500417830729LL;
int var_20 = -1647230621;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
