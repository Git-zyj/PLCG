#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
long long int var_3 = -5349064928514171368LL;
long long int var_6 = 3552581554955607581LL;
long long int var_9 = 6708396762049510604LL;
int zero = 0;
short var_12 = (short)-2108;
unsigned long long int var_13 = 15666297185647956498ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
