#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)14;
unsigned char var_7 = (unsigned char)94;
unsigned long long int var_10 = 9728578584366603912ULL;
int zero = 0;
long long int var_15 = -6298183998685624890LL;
int var_16 = -1283100725;
short var_17 = (short)22163;
unsigned int var_18 = 2750061104U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
