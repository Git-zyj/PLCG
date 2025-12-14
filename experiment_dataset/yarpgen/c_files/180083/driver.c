#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2544;
short var_1 = (short)-13986;
short var_2 = (short)-17514;
short var_3 = (short)26816;
short var_4 = (short)-3492;
unsigned long long int var_5 = 11703502165084690284ULL;
short var_6 = (short)6751;
unsigned char var_7 = (unsigned char)239;
short var_8 = (short)-22968;
signed char var_9 = (signed char)-94;
int zero = 0;
int var_10 = -1526518112;
signed char var_11 = (signed char)-23;
short var_12 = (short)-17544;
long long int var_13 = 2407522653759103706LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
