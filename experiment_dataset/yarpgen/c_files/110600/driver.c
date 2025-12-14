#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 189731143U;
unsigned long long int var_7 = 5631163163970379810ULL;
unsigned short var_13 = (unsigned short)42707;
long long int var_17 = -3194838608214868562LL;
unsigned char var_18 = (unsigned char)234;
int zero = 0;
unsigned char var_20 = (unsigned char)183;
unsigned char var_21 = (unsigned char)113;
signed char var_22 = (signed char)-108;
void init() {
}

void checksum() {
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
