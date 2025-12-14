#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -664675717;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-2099;
int var_6 = 939442064;
int var_9 = 885515226;
int var_13 = -1452009999;
int zero = 0;
unsigned char var_17 = (unsigned char)8;
int var_18 = 41329570;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
