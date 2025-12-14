#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 6547240063133736497ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 1899973534U;
short var_14 = (short)-22258;
long long int var_19 = -4517641735153442687LL;
int zero = 0;
unsigned long long int var_20 = 3471771225117472694ULL;
unsigned char var_21 = (unsigned char)41;
void init() {
}

void checksum() {
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
