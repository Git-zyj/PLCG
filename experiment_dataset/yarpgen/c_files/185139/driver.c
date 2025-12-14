#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16863690188117273075ULL;
long long int var_9 = -3567822058778874473LL;
short var_10 = (short)20374;
int zero = 0;
short var_15 = (short)-8409;
unsigned short var_16 = (unsigned short)53014;
unsigned long long int var_17 = 10508661282702044502ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
