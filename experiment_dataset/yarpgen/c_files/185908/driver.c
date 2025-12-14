#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10459898706997687139ULL;
long long int var_6 = -8250586136975934103LL;
long long int var_9 = 2208092926624338518LL;
int zero = 0;
long long int var_12 = 7329455669967079214LL;
signed char var_13 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
