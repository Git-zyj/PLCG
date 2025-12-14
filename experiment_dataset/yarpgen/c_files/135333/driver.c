#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1439823866;
unsigned int var_3 = 4078047277U;
unsigned short var_7 = (unsigned short)25198;
long long int var_10 = -316946027962787355LL;
unsigned long long int var_17 = 12582817744346716213ULL;
int zero = 0;
unsigned long long int var_19 = 13576387637031473686ULL;
unsigned short var_20 = (unsigned short)64596;
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
