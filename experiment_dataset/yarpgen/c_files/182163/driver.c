#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1716922170U;
unsigned long long int var_3 = 9830431148541084118ULL;
int var_5 = -602001213;
int zero = 0;
long long int var_13 = -2113933034183753368LL;
short var_14 = (short)-23713;
short var_15 = (short)28950;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
