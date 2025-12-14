#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3020;
unsigned char var_2 = (unsigned char)34;
_Bool var_3 = (_Bool)0;
int var_4 = 801340759;
unsigned int var_5 = 3960416601U;
short var_6 = (short)-28370;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)145;
signed char var_10 = (signed char)112;
int var_11 = -115263946;
int zero = 0;
unsigned char var_12 = (unsigned char)252;
unsigned int var_13 = 2302240067U;
unsigned int var_14 = 2086275784U;
unsigned long long int var_15 = 18103825419352796796ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
