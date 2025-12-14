#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1408695795788598719LL;
unsigned char var_4 = (unsigned char)30;
unsigned short var_6 = (unsigned short)22243;
short var_14 = (short)-23507;
int zero = 0;
long long int var_15 = -7274424781986865974LL;
int var_16 = 1219089848;
void init() {
}

void checksum() {
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
