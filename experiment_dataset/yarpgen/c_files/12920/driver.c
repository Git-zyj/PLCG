#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)190;
unsigned long long int var_3 = 6512971010001636914ULL;
long long int var_5 = -4477935197718425782LL;
unsigned short var_6 = (unsigned short)18073;
unsigned long long int var_10 = 14731500559462815960ULL;
int zero = 0;
short var_12 = (short)31437;
unsigned long long int var_13 = 11899871952559971925ULL;
unsigned long long int var_14 = 13771044917330517202ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
