#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 724804341;
unsigned short var_5 = (unsigned short)29718;
unsigned char var_8 = (unsigned char)220;
signed char var_9 = (signed char)101;
short var_11 = (short)-15930;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 1319903094274892688ULL;
int var_16 = 654877111;
short var_17 = (short)31399;
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
