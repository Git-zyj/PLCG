#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12058;
unsigned int var_6 = 3403796310U;
signed char var_8 = (signed char)-13;
int zero = 0;
unsigned long long int var_16 = 15011464578336986013ULL;
int var_17 = -1097746487;
unsigned int var_18 = 2639078041U;
unsigned int var_19 = 940204242U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
