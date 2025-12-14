#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4218693072U;
short var_4 = (short)-17388;
short var_12 = (short)18749;
int zero = 0;
unsigned long long int var_15 = 8771930648118457938ULL;
long long int var_16 = -2437068446275180149LL;
signed char var_17 = (signed char)-22;
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
