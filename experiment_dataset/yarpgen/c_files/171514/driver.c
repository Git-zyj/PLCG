#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2278;
unsigned long long int var_5 = 3367940355841332304ULL;
unsigned short var_7 = (unsigned short)26440;
short var_11 = (short)3913;
int zero = 0;
short var_12 = (short)32069;
int var_13 = 1025087938;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
