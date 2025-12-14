#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12278758764001932359ULL;
unsigned long long int var_6 = 17760699370397506362ULL;
long long int var_11 = 6799241305635091969LL;
int var_13 = 691441246;
signed char var_15 = (signed char)76;
int zero = 0;
unsigned char var_17 = (unsigned char)196;
int var_18 = -2055239451;
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
