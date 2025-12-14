#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
int var_3 = 456165727;
signed char var_4 = (signed char)26;
unsigned long long int var_5 = 6729679979023543300ULL;
short var_9 = (short)20582;
unsigned char var_11 = (unsigned char)201;
int zero = 0;
unsigned short var_13 = (unsigned short)13965;
int var_14 = -1377124573;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
