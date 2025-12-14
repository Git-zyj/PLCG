#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)0;
unsigned long long int var_4 = 13067726874049356859ULL;
unsigned int var_5 = 859511343U;
short var_7 = (short)25727;
long long int var_10 = 6038833510609721494LL;
unsigned long long int var_11 = 8180324932588235228ULL;
int var_12 = 1902141186;
int zero = 0;
unsigned char var_14 = (unsigned char)194;
_Bool var_15 = (_Bool)1;
long long int var_16 = -7878695767493818803LL;
void init() {
}

void checksum() {
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
