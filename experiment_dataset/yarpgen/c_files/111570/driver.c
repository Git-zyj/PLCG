#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-86;
long long int var_8 = 3033599823668165001LL;
short var_9 = (short)-2643;
signed char var_13 = (signed char)35;
int zero = 0;
int var_16 = 2020709134;
unsigned long long int var_17 = 14597010096100400954ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
