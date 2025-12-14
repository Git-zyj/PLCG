#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13414;
unsigned long long int var_8 = 613908007626522404ULL;
unsigned long long int var_10 = 8894338732645122719ULL;
int zero = 0;
short var_15 = (short)-23485;
unsigned char var_16 = (unsigned char)105;
long long int var_17 = -740217763889127190LL;
short var_18 = (short)18166;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
