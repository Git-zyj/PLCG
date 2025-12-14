#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30007;
unsigned char var_5 = (unsigned char)239;
_Bool var_7 = (_Bool)1;
unsigned char var_13 = (unsigned char)240;
int var_14 = -929414178;
int var_15 = -1394112605;
int zero = 0;
unsigned short var_18 = (unsigned short)36325;
unsigned char var_19 = (unsigned char)36;
long long int var_20 = -5649657085218230384LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
