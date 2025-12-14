#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34564;
signed char var_5 = (signed char)112;
unsigned long long int var_6 = 15139173470924281532ULL;
unsigned int var_8 = 5428823U;
int var_12 = -137989287;
int zero = 0;
short var_13 = (short)-29721;
int var_14 = 1406238797;
unsigned short var_15 = (unsigned short)53233;
signed char var_16 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
