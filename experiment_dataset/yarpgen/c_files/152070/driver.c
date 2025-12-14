#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12929659484726920155ULL;
unsigned long long int var_7 = 3210065442247274287ULL;
unsigned int var_10 = 4109164164U;
unsigned short var_11 = (unsigned short)607;
int zero = 0;
short var_14 = (short)-4713;
unsigned int var_15 = 4127768515U;
void init() {
}

void checksum() {
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
