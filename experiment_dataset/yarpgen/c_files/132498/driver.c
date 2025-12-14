#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 931811203U;
unsigned int var_1 = 1320633807U;
unsigned int var_4 = 1381035797U;
unsigned int var_5 = 193944551U;
unsigned int var_8 = 2711316658U;
int zero = 0;
unsigned int var_12 = 1552557699U;
unsigned int var_13 = 3765876038U;
unsigned int var_14 = 369532762U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
