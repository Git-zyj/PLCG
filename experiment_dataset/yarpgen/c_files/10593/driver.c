#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)71;
short var_4 = (short)2027;
int var_10 = 519111847;
short var_12 = (short)-25246;
unsigned short var_14 = (unsigned short)28330;
long long int var_16 = -6412684331887904110LL;
int zero = 0;
unsigned char var_18 = (unsigned char)48;
unsigned char var_19 = (unsigned char)253;
long long int var_20 = -1564397560942071685LL;
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
