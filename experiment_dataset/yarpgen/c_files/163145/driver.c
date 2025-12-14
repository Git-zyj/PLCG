#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3704;
unsigned char var_3 = (unsigned char)82;
signed char var_4 = (signed char)-44;
unsigned int var_6 = 3851377520U;
signed char var_7 = (signed char)54;
signed char var_10 = (signed char)-64;
unsigned long long int var_11 = 12352580592474240735ULL;
unsigned int var_12 = 2415673381U;
int zero = 0;
unsigned char var_13 = (unsigned char)85;
unsigned long long int var_14 = 3229395310294040276ULL;
long long int var_15 = 7098700382357905167LL;
unsigned int var_16 = 2856630488U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
