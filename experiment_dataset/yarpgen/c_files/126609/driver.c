#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
long long int var_8 = 6926343408221645711LL;
unsigned short var_9 = (unsigned short)52346;
unsigned char var_10 = (unsigned char)13;
int var_11 = 1980835228;
unsigned long long int var_12 = 9715477283603835034ULL;
int zero = 0;
signed char var_14 = (signed char)16;
long long int var_15 = 412842042448147033LL;
signed char var_16 = (signed char)75;
signed char var_17 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
