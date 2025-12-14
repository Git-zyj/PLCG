#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2543487562U;
unsigned int var_4 = 2242258725U;
unsigned int var_5 = 2952104530U;
unsigned int var_8 = 970895158U;
unsigned int var_11 = 3474798196U;
int zero = 0;
unsigned int var_12 = 2397323068U;
unsigned int var_13 = 1169590277U;
unsigned int var_14 = 875686260U;
unsigned int var_15 = 1369245632U;
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
