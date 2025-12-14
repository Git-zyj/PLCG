#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -436396232537092190LL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1614145875U;
short var_3 = (short)24319;
unsigned long long int var_4 = 17967968384198796040ULL;
int var_5 = 1725127479;
short var_10 = (short)-24135;
short var_11 = (short)22272;
int zero = 0;
unsigned int var_13 = 3321299296U;
unsigned char var_14 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
