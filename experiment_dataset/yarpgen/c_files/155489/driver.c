#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
unsigned long long int var_1 = 8815236235753355381ULL;
unsigned long long int var_3 = 9811270597122896534ULL;
signed char var_7 = (signed char)-60;
unsigned long long int var_8 = 6801220888184763868ULL;
_Bool var_9 = (_Bool)1;
long long int var_11 = 2012314369048106865LL;
int zero = 0;
unsigned short var_12 = (unsigned short)26135;
unsigned short var_13 = (unsigned short)52440;
short var_14 = (short)3450;
short var_15 = (short)-22028;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
