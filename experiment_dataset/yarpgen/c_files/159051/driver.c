#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2603061090107596021ULL;
unsigned int var_6 = 599100652U;
unsigned short var_7 = (unsigned short)9754;
short var_9 = (short)-1977;
short var_12 = (short)-27363;
unsigned char var_16 = (unsigned char)187;
short var_17 = (short)-22129;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 11739442064666085653ULL;
unsigned short var_21 = (unsigned short)34394;
void init() {
}

void checksum() {
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
