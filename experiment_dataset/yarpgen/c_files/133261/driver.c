#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3113135791U;
int var_3 = -885273746;
unsigned short var_6 = (unsigned short)56933;
unsigned int var_7 = 3262948559U;
unsigned char var_10 = (unsigned char)237;
long long int var_13 = 7536284622120035081LL;
int zero = 0;
signed char var_14 = (signed char)105;
signed char var_15 = (signed char)81;
long long int var_16 = -527478794385106077LL;
unsigned long long int var_17 = 5218481008027296300ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
