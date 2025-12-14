#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7325514246575743183ULL;
long long int var_9 = -4299080409955207431LL;
signed char var_11 = (signed char)58;
int zero = 0;
unsigned long long int var_14 = 16929770656437610987ULL;
unsigned short var_15 = (unsigned short)18119;
unsigned short var_16 = (unsigned short)23473;
unsigned int var_17 = 4106115480U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
