#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)248;
long long int var_4 = 2109127148151250529LL;
unsigned int var_7 = 3864782375U;
short var_14 = (short)-30366;
short var_16 = (short)-18236;
int zero = 0;
unsigned int var_17 = 2435712626U;
unsigned int var_18 = 1132306169U;
unsigned short var_19 = (unsigned short)3741;
short var_20 = (short)-22375;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
