#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1190082659;
unsigned long long int var_3 = 7236052718824440324ULL;
unsigned short var_10 = (unsigned short)64806;
unsigned int var_12 = 1083220530U;
_Bool var_13 = (_Bool)1;
int var_15 = 872315913;
long long int var_16 = -8350529695443815207LL;
short var_17 = (short)26463;
int zero = 0;
unsigned short var_18 = (unsigned short)35112;
unsigned char var_19 = (unsigned char)107;
unsigned char var_20 = (unsigned char)85;
unsigned long long int var_21 = 6554754697664466689ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
