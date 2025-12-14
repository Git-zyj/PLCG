#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12393683150892444608ULL;
unsigned long long int var_5 = 3907071486553417811ULL;
unsigned long long int var_8 = 3948133924283989678ULL;
long long int var_9 = -5327565592072190993LL;
unsigned long long int var_12 = 9957432524882689339ULL;
unsigned char var_13 = (unsigned char)175;
int var_14 = 1602107575;
int zero = 0;
short var_15 = (short)-14303;
long long int var_16 = 700520290969290039LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
