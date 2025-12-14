#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5639261177444492171ULL;
unsigned char var_3 = (unsigned char)143;
signed char var_4 = (signed char)63;
unsigned long long int var_8 = 12813279440462193358ULL;
unsigned long long int var_10 = 16233083315800856128ULL;
unsigned int var_12 = 2576334544U;
int zero = 0;
int var_17 = 1113668086;
signed char var_18 = (signed char)-50;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
