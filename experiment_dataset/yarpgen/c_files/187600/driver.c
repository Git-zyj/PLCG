#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9287;
unsigned long long int var_2 = 6168112877248020730ULL;
unsigned short var_3 = (unsigned short)62328;
long long int var_4 = -8763616413958346485LL;
unsigned long long int var_6 = 2615338391953322729ULL;
long long int var_9 = -2170328227385423600LL;
int var_10 = -1414199288;
short var_11 = (short)2270;
unsigned long long int var_12 = 4400310026194424971ULL;
int zero = 0;
short var_13 = (short)-2853;
unsigned char var_14 = (unsigned char)66;
unsigned long long int var_15 = 872812257990009113ULL;
unsigned int var_16 = 3820961687U;
unsigned short var_17 = (unsigned short)18464;
unsigned long long int var_18 = 3239047845399861018ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
