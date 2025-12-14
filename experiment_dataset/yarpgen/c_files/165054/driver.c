#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13481047962423979185ULL;
short var_3 = (short)18031;
signed char var_7 = (signed char)-97;
int zero = 0;
short var_12 = (short)-18934;
long long int var_13 = 5718657792688343837LL;
unsigned long long int var_14 = 83451231462267613ULL;
short var_15 = (short)-17083;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
