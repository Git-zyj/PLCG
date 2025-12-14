#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8991229150028884873ULL;
long long int var_5 = -1953105913164714580LL;
signed char var_11 = (signed char)-56;
int zero = 0;
unsigned int var_12 = 1934196928U;
short var_13 = (short)-24740;
signed char var_14 = (signed char)21;
unsigned long long int var_15 = 1370816030188949541ULL;
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
