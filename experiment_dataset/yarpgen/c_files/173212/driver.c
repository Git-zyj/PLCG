#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1526836782;
unsigned char var_4 = (unsigned char)66;
unsigned short var_7 = (unsigned short)24941;
signed char var_8 = (signed char)66;
short var_12 = (short)-22503;
int zero = 0;
unsigned long long int var_13 = 8486214217666155884ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 685929330U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
