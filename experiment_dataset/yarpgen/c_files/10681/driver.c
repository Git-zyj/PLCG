#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)36;
unsigned short var_12 = (unsigned short)28219;
unsigned short var_15 = (unsigned short)42686;
int zero = 0;
unsigned int var_16 = 1478045456U;
unsigned int var_17 = 2705515282U;
unsigned short var_18 = (unsigned short)59971;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
