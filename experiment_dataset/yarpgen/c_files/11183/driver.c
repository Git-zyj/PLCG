#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -792230910;
int var_1 = -1536275615;
short var_7 = (short)-9385;
int var_10 = 742530643;
int var_11 = -23805699;
short var_12 = (short)-32743;
int zero = 0;
short var_17 = (short)-28407;
int var_18 = -1849782716;
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
