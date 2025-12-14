#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1194366859;
unsigned char var_9 = (unsigned char)88;
long long int var_11 = -4607640880168305589LL;
int zero = 0;
short var_17 = (short)-20841;
unsigned long long int var_18 = 441736551291114758ULL;
unsigned long long int var_19 = 208483343954504495ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
