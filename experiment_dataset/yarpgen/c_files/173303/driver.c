#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 4392928935725541978ULL;
unsigned char var_10 = (unsigned char)198;
unsigned long long int var_11 = 563807818283300499ULL;
signed char var_15 = (signed char)68;
int zero = 0;
unsigned int var_17 = 1458928774U;
short var_18 = (short)28871;
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
