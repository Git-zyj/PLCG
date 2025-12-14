#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)112;
signed char var_3 = (signed char)-21;
unsigned int var_7 = 1352987387U;
unsigned long long int var_11 = 2244189638614570555ULL;
int zero = 0;
short var_13 = (short)28665;
int var_14 = 1236179169;
unsigned int var_15 = 2358975550U;
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
