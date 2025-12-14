#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33949;
unsigned char var_3 = (unsigned char)9;
_Bool var_6 = (_Bool)1;
short var_11 = (short)-20467;
unsigned char var_12 = (unsigned char)14;
unsigned int var_14 = 1931429757U;
short var_15 = (short)-20295;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = 3907278726093074197LL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
