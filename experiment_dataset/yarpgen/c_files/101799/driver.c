#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8246268774559111332ULL;
unsigned long long int var_1 = 138263734434668221ULL;
unsigned long long int var_2 = 14957012494882827691ULL;
unsigned int var_3 = 4204644185U;
short var_4 = (short)-6297;
unsigned long long int var_5 = 11790435696519998015ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)5706;
long long int var_8 = -6139151629490623692LL;
unsigned int var_9 = 4087314587U;
int var_10 = 1168497325;
int var_11 = 1145377670;
int zero = 0;
unsigned int var_13 = 1701067732U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 18371479818381755040ULL;
int var_16 = 2077252256;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
