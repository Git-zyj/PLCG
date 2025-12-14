#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24443;
unsigned int var_4 = 2365462930U;
unsigned long long int var_8 = 4840137509973174071ULL;
unsigned long long int var_11 = 1505370010876431744ULL;
int zero = 0;
unsigned long long int var_16 = 1620411155163067090ULL;
short var_17 = (short)31808;
void init() {
}

void checksum() {
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
