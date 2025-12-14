#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)2686;
unsigned short var_14 = (unsigned short)28571;
unsigned long long int var_18 = 15307555321448738300ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)51738;
unsigned long long int var_20 = 17322806074402511755ULL;
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
