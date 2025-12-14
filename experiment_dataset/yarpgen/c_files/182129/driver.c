#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3506458009U;
unsigned int var_3 = 3313499969U;
long long int var_4 = 358872198866873311LL;
unsigned char var_8 = (unsigned char)81;
int zero = 0;
int var_11 = -620501669;
unsigned long long int var_12 = 12459791973348383239ULL;
unsigned short var_13 = (unsigned short)41639;
unsigned long long int var_14 = 18411542311075392107ULL;
int var_15 = -180959612;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
