#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1886465793U;
unsigned int var_2 = 1490115220U;
unsigned int var_4 = 2370436952U;
int zero = 0;
unsigned int var_20 = 3872205943U;
unsigned int var_21 = 1288398677U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
