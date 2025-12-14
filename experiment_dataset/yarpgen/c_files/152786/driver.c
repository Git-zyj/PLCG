#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1336309698;
unsigned long long int var_8 = 8881352667417058882ULL;
int zero = 0;
unsigned long long int var_16 = 10873470204461938629ULL;
unsigned short var_17 = (unsigned short)44038;
short var_18 = (short)-4258;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
