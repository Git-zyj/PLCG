#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)88;
int var_8 = 216903901;
short var_10 = (short)13992;
unsigned short var_12 = (unsigned short)23972;
int var_13 = -1156985658;
short var_16 = (short)-6706;
int zero = 0;
unsigned long long int var_18 = 2199591583621364597ULL;
int var_19 = -224286736;
long long int var_20 = -2933076333199259229LL;
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
