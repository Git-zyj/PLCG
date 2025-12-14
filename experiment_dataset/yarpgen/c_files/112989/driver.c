#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43392;
signed char var_1 = (signed char)49;
short var_2 = (short)-25442;
long long int var_10 = 5372237403786722167LL;
signed char var_11 = (signed char)73;
unsigned short var_13 = (unsigned short)64003;
int zero = 0;
long long int var_17 = 6801788348832774425LL;
signed char var_18 = (signed char)23;
signed char var_19 = (signed char)16;
unsigned int var_20 = 2593831206U;
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
