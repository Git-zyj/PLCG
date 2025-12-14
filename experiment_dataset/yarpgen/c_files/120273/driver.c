#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1341465340;
int var_2 = -1360765190;
unsigned char var_5 = (unsigned char)234;
short var_7 = (short)9706;
unsigned short var_8 = (unsigned short)14136;
int var_9 = 1325088697;
unsigned char var_10 = (unsigned char)141;
_Bool var_11 = (_Bool)0;
unsigned int var_15 = 1791144320U;
unsigned short var_16 = (unsigned short)26596;
int zero = 0;
unsigned long long int var_17 = 12699473934927686363ULL;
unsigned int var_18 = 1440118045U;
unsigned int var_19 = 4242929293U;
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
