#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1141159789U;
unsigned int var_1 = 3112993047U;
unsigned short var_5 = (unsigned short)21532;
signed char var_9 = (signed char)-94;
unsigned int var_15 = 887266290U;
int zero = 0;
signed char var_18 = (signed char)-4;
unsigned int var_19 = 3009135650U;
void init() {
}

void checksum() {
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
