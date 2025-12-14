#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51954;
signed char var_4 = (signed char)-81;
unsigned long long int var_8 = 18089388810725231621ULL;
long long int var_10 = 7529814115583193369LL;
unsigned short var_14 = (unsigned short)40992;
int zero = 0;
unsigned int var_17 = 3237054822U;
int var_18 = -1767997355;
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
