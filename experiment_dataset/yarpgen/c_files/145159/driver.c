#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9243;
signed char var_2 = (signed char)-110;
signed char var_3 = (signed char)96;
signed char var_5 = (signed char)75;
unsigned long long int var_9 = 380877387110632847ULL;
short var_10 = (short)-32477;
long long int var_12 = -6755497606414747201LL;
unsigned short var_13 = (unsigned short)4651;
unsigned char var_14 = (unsigned char)150;
short var_15 = (short)-13919;
int zero = 0;
int var_16 = -1088412240;
unsigned short var_17 = (unsigned short)39874;
short var_18 = (short)522;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
