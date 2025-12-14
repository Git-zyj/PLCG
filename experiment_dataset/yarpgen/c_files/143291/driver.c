#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)21908;
long long int var_12 = -7515947862011690460LL;
unsigned char var_13 = (unsigned char)99;
int zero = 0;
long long int var_15 = 8711331526495155632LL;
unsigned char var_16 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
