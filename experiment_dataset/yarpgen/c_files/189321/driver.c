#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2875632314U;
unsigned int var_3 = 4134330295U;
unsigned int var_14 = 3719151973U;
unsigned int var_17 = 606155303U;
unsigned int var_18 = 2411196031U;
int zero = 0;
unsigned int var_19 = 2801528687U;
unsigned int var_20 = 309454052U;
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
