#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1410688672;
int var_6 = 1195246184;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1643456367U;
int zero = 0;
int var_14 = -736120423;
long long int var_15 = 3270039363504480958LL;
long long int var_16 = 6080855453468502461LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
