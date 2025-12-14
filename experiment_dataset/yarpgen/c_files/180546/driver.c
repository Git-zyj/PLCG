#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8029027014738395146LL;
unsigned char var_2 = (unsigned char)76;
unsigned char var_3 = (unsigned char)227;
unsigned long long int var_5 = 4625189286795868988ULL;
_Bool var_7 = (_Bool)1;
short var_11 = (short)-26154;
int zero = 0;
short var_12 = (short)-14514;
int var_13 = 1350252501;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
