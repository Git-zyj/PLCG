#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40800;
unsigned char var_3 = (unsigned char)25;
int var_5 = -157247194;
long long int var_6 = 678490270171045052LL;
int var_7 = -1073588222;
long long int var_13 = 7579689454390968983LL;
int zero = 0;
int var_14 = -1686318250;
signed char var_15 = (signed char)-22;
signed char var_16 = (signed char)30;
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
