#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)74;
unsigned short var_7 = (unsigned short)63175;
int var_10 = -1396702906;
int var_11 = 2078742915;
unsigned char var_17 = (unsigned char)76;
int zero = 0;
int var_18 = -80599310;
long long int var_19 = 1809274045668976163LL;
unsigned long long int var_20 = 15971104734133812714ULL;
signed char var_21 = (signed char)71;
unsigned char var_22 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
