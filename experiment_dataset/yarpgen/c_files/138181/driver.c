#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30577;
int var_1 = -757496778;
short var_3 = (short)22893;
short var_7 = (short)7687;
short var_11 = (short)-5724;
int var_13 = -912335688;
int zero = 0;
int var_17 = -2107153712;
short var_18 = (short)-5475;
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
