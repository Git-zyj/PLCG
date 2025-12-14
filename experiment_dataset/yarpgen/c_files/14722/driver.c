#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1401022435194997089LL;
int var_1 = 1872480166;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)31881;
unsigned char var_8 = (unsigned char)175;
unsigned short var_10 = (unsigned short)38177;
int zero = 0;
unsigned short var_14 = (unsigned short)8579;
int var_15 = 1582810558;
void init() {
}

void checksum() {
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
