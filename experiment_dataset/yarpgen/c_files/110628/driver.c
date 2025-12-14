#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 8166342790571896486LL;
unsigned int var_7 = 1597414715U;
unsigned long long int var_16 = 9625823265289631041ULL;
int zero = 0;
short var_17 = (short)-15098;
long long int var_18 = -4081972284942144172LL;
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
