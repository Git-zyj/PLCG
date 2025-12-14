#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3294198451U;
unsigned int var_1 = 2747386380U;
unsigned int var_4 = 2375122171U;
int var_9 = 496325314;
int var_13 = -638667311;
int zero = 0;
unsigned int var_14 = 593773729U;
unsigned short var_15 = (unsigned short)29060;
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
