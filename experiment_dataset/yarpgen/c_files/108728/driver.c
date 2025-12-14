#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-122;
unsigned int var_5 = 1823997340U;
int var_9 = 432316407;
short var_13 = (short)31026;
unsigned int var_18 = 2826270350U;
int zero = 0;
short var_19 = (short)30191;
unsigned int var_20 = 1712639988U;
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
