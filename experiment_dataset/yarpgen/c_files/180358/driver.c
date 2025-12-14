#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)223;
unsigned long long int var_4 = 7556927749755582420ULL;
short var_5 = (short)18068;
unsigned int var_6 = 1558265679U;
short var_10 = (short)13238;
signed char var_11 = (signed char)90;
signed char var_13 = (signed char)-88;
int zero = 0;
signed char var_14 = (signed char)-4;
unsigned long long int var_15 = 3720386903836390511ULL;
int var_16 = 1196010336;
short var_17 = (short)-22316;
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
