#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2797820646U;
long long int var_3 = 4663636124192978452LL;
unsigned short var_11 = (unsigned short)3052;
int var_13 = -34356073;
unsigned short var_15 = (unsigned short)27015;
unsigned short var_16 = (unsigned short)8191;
int zero = 0;
short var_17 = (short)4639;
unsigned long long int var_18 = 1801073725048090966ULL;
_Bool var_19 = (_Bool)0;
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
