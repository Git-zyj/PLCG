#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 87091190;
short var_8 = (short)-11289;
unsigned char var_10 = (unsigned char)224;
int zero = 0;
unsigned short var_19 = (unsigned short)1796;
long long int var_20 = -5512092017035483015LL;
void init() {
}

void checksum() {
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
