#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1385169986;
int var_5 = 1914764112;
int var_13 = -536956286;
int var_15 = -161734090;
int var_17 = 1732824038;
int zero = 0;
int var_20 = 1105587599;
int var_21 = -997437184;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
