#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26511;
unsigned short var_2 = (unsigned short)50184;
int var_3 = -1866770519;
signed char var_8 = (signed char)-82;
short var_10 = (short)7150;
int zero = 0;
unsigned long long int var_15 = 14607076534023629807ULL;
long long int var_16 = -5770734951551823395LL;
unsigned long long int var_17 = 8575213560035158605ULL;
unsigned long long int var_18 = 14647943203162432311ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
