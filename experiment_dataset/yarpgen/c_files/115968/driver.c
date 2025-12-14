#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5353;
int var_4 = 2087674279;
int var_10 = 1856552031;
unsigned int var_11 = 3430256016U;
int var_12 = -734016266;
signed char var_14 = (signed char)5;
long long int var_15 = 6706023804135875283LL;
int var_16 = 1383076927;
int zero = 0;
unsigned int var_17 = 4173862032U;
signed char var_18 = (signed char)120;
int var_19 = 1632335610;
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
