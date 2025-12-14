#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1667763308;
long long int var_4 = -226764451861424399LL;
short var_5 = (short)-11204;
unsigned int var_6 = 1055965579U;
unsigned char var_11 = (unsigned char)162;
int zero = 0;
short var_15 = (short)-20543;
long long int var_16 = -4163714524913210651LL;
void init() {
}

void checksum() {
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
