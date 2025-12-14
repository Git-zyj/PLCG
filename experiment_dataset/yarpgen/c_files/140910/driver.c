#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)210;
unsigned long long int var_10 = 11059073484293251201ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)13633;
unsigned long long int var_14 = 14637089433736993183ULL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)232;
signed char var_17 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
