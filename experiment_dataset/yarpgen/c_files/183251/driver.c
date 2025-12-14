#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5585539592253187798ULL;
unsigned long long int var_5 = 5997327804020204134ULL;
unsigned char var_10 = (unsigned char)74;
signed char var_11 = (signed char)13;
short var_18 = (short)29156;
int zero = 0;
unsigned char var_19 = (unsigned char)67;
unsigned long long int var_20 = 15990704378978098884ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
