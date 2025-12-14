#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1929976377;
signed char var_2 = (signed char)2;
unsigned int var_4 = 393431393U;
short var_7 = (short)-22612;
unsigned long long int var_9 = 5854958485962245314ULL;
short var_14 = (short)9602;
int zero = 0;
short var_16 = (short)-10230;
unsigned long long int var_17 = 8459205536622316404ULL;
short var_18 = (short)4195;
unsigned char var_19 = (unsigned char)197;
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
