#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3954399686U;
unsigned char var_4 = (unsigned char)100;
unsigned long long int var_5 = 6210038900501023410ULL;
long long int var_6 = -1506403473117602403LL;
unsigned char var_11 = (unsigned char)110;
unsigned char var_12 = (unsigned char)39;
long long int var_16 = -9122114646758426350LL;
int zero = 0;
unsigned long long int var_17 = 15634330333219347921ULL;
signed char var_18 = (signed char)5;
long long int var_19 = 793827639721161420LL;
void init() {
}

void checksum() {
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
