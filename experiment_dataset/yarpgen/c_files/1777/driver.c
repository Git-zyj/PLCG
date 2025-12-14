#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12984750066558437525ULL;
unsigned short var_3 = (unsigned short)26157;
unsigned long long int var_4 = 12159818629537722254ULL;
short var_5 = (short)-32411;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_8 = -5743143397921552292LL;
unsigned char var_9 = (unsigned char)166;
unsigned long long int var_11 = 9252065966898500746ULL;
unsigned char var_17 = (unsigned char)26;
short var_18 = (short)-6227;
unsigned short var_19 = (unsigned short)55648;
int zero = 0;
short var_20 = (short)-17184;
short var_21 = (short)20751;
unsigned char var_22 = (unsigned char)87;
short var_23 = (short)-28547;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
