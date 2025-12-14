#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)55;
unsigned char var_4 = (unsigned char)162;
short var_6 = (short)-5922;
unsigned short var_9 = (unsigned short)33396;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)175;
int zero = 0;
int var_13 = -400433060;
int var_14 = 1226905757;
long long int var_15 = -8269753581625346181LL;
void init() {
}

void checksum() {
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
