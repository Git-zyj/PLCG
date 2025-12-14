#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)32421;
short var_8 = (short)-25832;
long long int var_9 = -7260672191315080289LL;
short var_11 = (short)-24964;
int zero = 0;
unsigned long long int var_17 = 14929933152406524205ULL;
unsigned char var_18 = (unsigned char)201;
void init() {
}

void checksum() {
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
