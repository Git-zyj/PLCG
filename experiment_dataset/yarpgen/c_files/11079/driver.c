#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)130;
unsigned char var_7 = (unsigned char)57;
unsigned long long int var_8 = 11163699599864706825ULL;
long long int var_10 = 3121093735199480292LL;
int zero = 0;
signed char var_13 = (signed char)-36;
long long int var_14 = -5463490180238104685LL;
short var_15 = (short)-28263;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
