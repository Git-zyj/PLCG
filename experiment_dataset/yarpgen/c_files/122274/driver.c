#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25807;
unsigned int var_1 = 513234584U;
short var_11 = (short)-29545;
int zero = 0;
unsigned int var_13 = 1050109694U;
unsigned int var_14 = 314247231U;
short var_15 = (short)17788;
void init() {
}

void checksum() {
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
