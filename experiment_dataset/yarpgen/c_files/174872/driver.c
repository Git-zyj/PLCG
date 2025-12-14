#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8788611585137983175LL;
long long int var_5 = -4504502129271804834LL;
unsigned long long int var_10 = 8895739740485631597ULL;
int zero = 0;
long long int var_14 = -6628501031686996998LL;
unsigned long long int var_15 = 1818891004862892131ULL;
unsigned long long int var_16 = 7967511874457695064ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
