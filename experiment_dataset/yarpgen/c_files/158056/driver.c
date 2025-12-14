#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3547;
unsigned long long int var_1 = 5615060898295907896ULL;
unsigned int var_6 = 460200028U;
int var_7 = -407552329;
int zero = 0;
unsigned long long int var_14 = 10827999598504963157ULL;
int var_15 = -2107409496;
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
