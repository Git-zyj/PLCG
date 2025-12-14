#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1039073023;
unsigned char var_7 = (unsigned char)223;
unsigned char var_14 = (unsigned char)111;
long long int var_18 = -6729178184827472578LL;
int zero = 0;
long long int var_19 = 5290854807690196553LL;
unsigned short var_20 = (unsigned short)55135;
unsigned short var_21 = (unsigned short)5963;
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
