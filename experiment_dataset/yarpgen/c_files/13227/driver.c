#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1089426290683732106LL;
signed char var_4 = (signed char)29;
unsigned char var_7 = (unsigned char)61;
long long int var_9 = 2821602346292019628LL;
unsigned int var_11 = 118194870U;
unsigned long long int var_12 = 1170340317336716584ULL;
int var_13 = 906374740;
int zero = 0;
unsigned char var_16 = (unsigned char)100;
unsigned int var_17 = 1653914234U;
unsigned int var_18 = 3543033822U;
int var_19 = -1896226401;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
