#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
unsigned char var_2 = (unsigned char)68;
int var_3 = 2094558659;
unsigned int var_4 = 2481685485U;
long long int var_6 = 965740974520458123LL;
long long int var_10 = -3411807666217341502LL;
signed char var_11 = (signed char)119;
short var_12 = (short)-3446;
short var_13 = (short)-17737;
int var_14 = -1953452732;
int var_15 = -1483658799;
int zero = 0;
unsigned short var_17 = (unsigned short)55668;
unsigned char var_18 = (unsigned char)35;
unsigned short var_19 = (unsigned short)19282;
void init() {
}

void checksum() {
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
