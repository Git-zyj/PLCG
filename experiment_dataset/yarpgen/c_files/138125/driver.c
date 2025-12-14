#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3080611533016492889LL;
unsigned long long int var_3 = 11962942915176857590ULL;
unsigned long long int var_5 = 13369614173261989692ULL;
int zero = 0;
long long int var_15 = 4880617528608348868LL;
long long int var_16 = -1704777512520462249LL;
unsigned char var_17 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
