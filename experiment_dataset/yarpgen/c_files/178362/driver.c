#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2641183214629558025ULL;
short var_3 = (short)-5306;
unsigned short var_7 = (unsigned short)39264;
int var_10 = -67261166;
int zero = 0;
int var_15 = 1669399763;
unsigned char var_16 = (unsigned char)88;
unsigned long long int var_17 = 13947239632496205238ULL;
_Bool var_18 = (_Bool)1;
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
