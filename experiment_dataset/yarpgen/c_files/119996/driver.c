#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -447439671;
unsigned long long int var_3 = 8336273388162700932ULL;
long long int var_5 = -874594267062989489LL;
unsigned long long int var_6 = 13099558833914923367ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)24508;
int var_10 = 1176976419;
unsigned long long int var_12 = 6305442033024125881ULL;
int zero = 0;
short var_14 = (short)-6358;
long long int var_15 = -6555092084120793503LL;
int var_16 = -887256996;
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
