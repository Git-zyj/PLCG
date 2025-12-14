#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -4130803098498475793LL;
unsigned int var_4 = 1053688016U;
unsigned char var_6 = (unsigned char)0;
long long int var_7 = -5003375559658447032LL;
signed char var_11 = (signed char)49;
long long int var_12 = -3768890807523036958LL;
unsigned short var_17 = (unsigned short)33843;
short var_19 = (short)31575;
int zero = 0;
short var_20 = (short)-32059;
unsigned char var_21 = (unsigned char)129;
unsigned long long int var_22 = 13954988910939126397ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
