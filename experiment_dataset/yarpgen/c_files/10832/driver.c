#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 486615798U;
unsigned int var_6 = 2781800943U;
unsigned int var_10 = 4261333268U;
unsigned int var_13 = 2087192376U;
int zero = 0;
unsigned int var_17 = 812212680U;
unsigned int var_18 = 3315348552U;
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
