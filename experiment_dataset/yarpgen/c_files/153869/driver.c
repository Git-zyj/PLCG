#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -297801455;
unsigned int var_11 = 2636136107U;
signed char var_13 = (signed char)22;
short var_15 = (short)-3157;
int zero = 0;
unsigned long long int var_17 = 12678241579595231404ULL;
unsigned long long int var_18 = 5830860592339482946ULL;
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
