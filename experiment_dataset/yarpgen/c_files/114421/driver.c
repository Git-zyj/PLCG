#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -1305038174;
unsigned char var_11 = (unsigned char)225;
long long int var_15 = 7754509727942131073LL;
int zero = 0;
long long int var_17 = -3328772756514481530LL;
short var_18 = (short)-207;
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
