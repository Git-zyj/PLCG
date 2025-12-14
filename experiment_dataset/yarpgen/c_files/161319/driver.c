#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 719720414U;
int var_3 = 970141008;
unsigned int var_4 = 333832557U;
short var_15 = (short)29140;
long long int var_18 = 4733759014896603896LL;
int zero = 0;
unsigned char var_19 = (unsigned char)174;
short var_20 = (short)13601;
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
