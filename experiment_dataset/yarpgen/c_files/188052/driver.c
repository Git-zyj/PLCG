#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2693892505884581091ULL;
short var_5 = (short)4304;
int var_8 = 1777667570;
long long int var_9 = -6653345006082688153LL;
unsigned long long int var_10 = 11827306619467330486ULL;
signed char var_14 = (signed char)41;
unsigned int var_15 = 626563185U;
int zero = 0;
signed char var_16 = (signed char)16;
signed char var_17 = (signed char)28;
unsigned long long int var_18 = 2574399395104028826ULL;
unsigned long long int var_19 = 8332515657426046265ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
