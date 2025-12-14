#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
short var_6 = (short)-18941;
long long int var_7 = 8965154245911244930LL;
int zero = 0;
unsigned char var_11 = (unsigned char)147;
int var_12 = 1451406052;
unsigned long long int var_13 = 1389249629064704966ULL;
int var_14 = -744473919;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
