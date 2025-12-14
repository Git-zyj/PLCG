#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3236890828477721624ULL;
unsigned long long int var_9 = 2504093381111662284ULL;
int var_14 = -1602981227;
signed char var_16 = (signed char)-95;
int zero = 0;
signed char var_17 = (signed char)-101;
signed char var_18 = (signed char)-36;
unsigned char var_19 = (unsigned char)88;
int var_20 = -1566166732;
signed char var_21 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
