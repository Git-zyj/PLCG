#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 993810692U;
unsigned int var_1 = 3077786748U;
unsigned int var_7 = 1235249057U;
unsigned int var_15 = 3439451681U;
unsigned int var_17 = 518734155U;
int zero = 0;
unsigned int var_19 = 3300131511U;
unsigned int var_20 = 1869400423U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
