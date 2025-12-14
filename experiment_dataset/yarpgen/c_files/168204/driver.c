#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6185942932410797269LL;
int var_7 = 1255689317;
long long int var_10 = -379617766563172422LL;
unsigned char var_12 = (unsigned char)55;
_Bool var_13 = (_Bool)0;
long long int var_15 = -4210808991316761422LL;
int zero = 0;
signed char var_18 = (signed char)-23;
unsigned short var_19 = (unsigned short)46023;
unsigned int var_20 = 2652842644U;
unsigned char var_21 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
