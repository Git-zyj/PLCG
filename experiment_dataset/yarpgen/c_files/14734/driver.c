#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1798807634536254225LL;
signed char var_6 = (signed char)50;
long long int var_8 = 1556765231941016689LL;
unsigned char var_9 = (unsigned char)46;
unsigned short var_10 = (unsigned short)52063;
int zero = 0;
unsigned short var_11 = (unsigned short)43620;
int var_12 = 1061016928;
unsigned char var_13 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
