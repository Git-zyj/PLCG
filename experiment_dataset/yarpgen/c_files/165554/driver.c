#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2151294219U;
unsigned int var_1 = 1042044695U;
unsigned int var_6 = 2747505103U;
unsigned int var_13 = 3421587106U;
unsigned int var_16 = 3244911160U;
int zero = 0;
unsigned int var_20 = 886412611U;
unsigned int var_21 = 3876817942U;
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
