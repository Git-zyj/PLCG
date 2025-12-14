#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32569;
unsigned long long int var_2 = 1457170736970639087ULL;
int var_10 = 163568734;
unsigned int var_12 = 1740212187U;
int zero = 0;
unsigned char var_17 = (unsigned char)116;
short var_18 = (short)30571;
unsigned char var_19 = (unsigned char)172;
long long int var_20 = 5774192454872200247LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
