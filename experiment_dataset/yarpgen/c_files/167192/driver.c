#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)102;
int var_7 = 1251647357;
long long int var_8 = 1633927234394833805LL;
long long int var_10 = -3202597451581415236LL;
short var_15 = (short)-32766;
unsigned char var_16 = (unsigned char)203;
int zero = 0;
signed char var_19 = (signed char)106;
unsigned char var_20 = (unsigned char)43;
unsigned char var_21 = (unsigned char)185;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
