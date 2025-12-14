#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)5;
long long int var_5 = 370910497118187501LL;
unsigned int var_6 = 732528163U;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)59451;
unsigned long long int var_11 = 5039182149614573110ULL;
long long int var_13 = -5467434794471455512LL;
short var_17 = (short)26047;
int zero = 0;
unsigned char var_19 = (unsigned char)202;
unsigned short var_20 = (unsigned short)2083;
void init() {
}

void checksum() {
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
