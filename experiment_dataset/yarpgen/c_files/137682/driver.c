#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21702;
signed char var_1 = (signed char)-93;
signed char var_9 = (signed char)122;
unsigned int var_10 = 2643158684U;
long long int var_11 = -3606322018941761004LL;
long long int var_12 = 1514064389790780290LL;
int zero = 0;
short var_14 = (short)29577;
signed char var_15 = (signed char)-6;
void init() {
}

void checksum() {
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
