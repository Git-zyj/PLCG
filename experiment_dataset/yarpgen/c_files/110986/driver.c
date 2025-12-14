#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1492979638;
signed char var_8 = (signed char)49;
signed char var_10 = (signed char)-37;
long long int var_13 = -1639373895520945355LL;
int zero = 0;
int var_17 = -2099693578;
long long int var_18 = -2542125694214744042LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
