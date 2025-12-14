#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14173;
short var_2 = (short)-9129;
_Bool var_4 = (_Bool)0;
int var_9 = -1586176760;
_Bool var_11 = (_Bool)1;
long long int var_13 = 4776582274853805629LL;
signed char var_15 = (signed char)112;
unsigned char var_16 = (unsigned char)23;
int zero = 0;
short var_18 = (short)-18673;
short var_19 = (short)-12501;
short var_20 = (short)18259;
void init() {
}

void checksum() {
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
