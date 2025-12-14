#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24196;
unsigned long long int var_10 = 502009131853943924ULL;
short var_13 = (short)-32632;
unsigned long long int var_16 = 780560324032567201ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)240;
unsigned char var_20 = (unsigned char)56;
void init() {
}

void checksum() {
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
