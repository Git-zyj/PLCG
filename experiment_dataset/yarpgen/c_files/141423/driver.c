#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12470021499248686012ULL;
short var_7 = (short)23119;
unsigned long long int var_8 = 11657575781809673454ULL;
unsigned long long int var_13 = 17850744204682000866ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)128;
unsigned char var_17 = (unsigned char)110;
unsigned long long int var_18 = 1251707488398008603ULL;
void init() {
}

void checksum() {
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
