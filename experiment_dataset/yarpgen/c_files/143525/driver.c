#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4651118187835764691ULL;
unsigned char var_5 = (unsigned char)183;
unsigned char var_6 = (unsigned char)206;
short var_8 = (short)-2374;
long long int var_10 = -59512546205772530LL;
int zero = 0;
long long int var_11 = -8204345989913907577LL;
unsigned char var_12 = (unsigned char)56;
unsigned int var_13 = 3474987462U;
int var_14 = 532814103;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
