#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6473437469711012883LL;
signed char var_7 = (signed char)19;
short var_10 = (short)-11033;
int zero = 0;
unsigned long long int var_14 = 5232770514419873144ULL;
long long int var_15 = 4303657256933481394LL;
void init() {
}

void checksum() {
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
