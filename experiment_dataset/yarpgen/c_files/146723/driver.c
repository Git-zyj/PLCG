#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -104440106;
int var_8 = -1237248181;
long long int var_11 = -5363099517921827008LL;
unsigned char var_12 = (unsigned char)249;
int zero = 0;
signed char var_14 = (signed char)-102;
long long int var_15 = 5754130553421849003LL;
unsigned int var_16 = 1441918616U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
