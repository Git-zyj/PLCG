#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 8857930527546479932LL;
unsigned short var_11 = (unsigned short)43376;
int zero = 0;
unsigned long long int var_17 = 2707070700263283958ULL;
unsigned long long int var_18 = 13655348557113792639ULL;
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
