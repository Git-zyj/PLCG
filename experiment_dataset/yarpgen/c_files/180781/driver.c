#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1994990478U;
long long int var_5 = 5287657522972811918LL;
long long int var_6 = 7143732749525636313LL;
int var_7 = -1665685746;
int zero = 0;
short var_14 = (short)11240;
unsigned int var_15 = 4190134230U;
short var_16 = (short)-23007;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
