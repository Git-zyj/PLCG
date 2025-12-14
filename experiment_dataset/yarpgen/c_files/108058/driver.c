#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7736;
unsigned long long int var_1 = 353069514280086958ULL;
long long int var_3 = 3174439503778725065LL;
unsigned int var_6 = 1210878792U;
int zero = 0;
int var_10 = -1921301325;
unsigned char var_11 = (unsigned char)224;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 10108581195982600646ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
