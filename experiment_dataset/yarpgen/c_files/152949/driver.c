#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)36;
short var_7 = (short)10036;
int var_14 = 1655342894;
unsigned int var_15 = 3513528114U;
int zero = 0;
short var_17 = (short)-26856;
unsigned long long int var_18 = 15376519666150057416ULL;
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
