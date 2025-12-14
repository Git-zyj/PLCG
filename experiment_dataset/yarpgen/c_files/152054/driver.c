#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2519968233358581691ULL;
long long int var_6 = 2597697660184805567LL;
unsigned short var_7 = (unsigned short)61577;
unsigned char var_11 = (unsigned char)227;
int zero = 0;
long long int var_15 = 4927985353833486021LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)53125;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
