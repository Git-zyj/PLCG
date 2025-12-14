#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 11146485000679134650ULL;
unsigned long long int var_2 = 15197108627728678210ULL;
unsigned long long int var_5 = 2241503712770222533ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 11951211864649213190ULL;
unsigned int var_16 = 4208773794U;
unsigned char var_17 = (unsigned char)133;
unsigned long long int var_18 = 13486712191326620125ULL;
unsigned long long int var_19 = 9978375274237298285ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
