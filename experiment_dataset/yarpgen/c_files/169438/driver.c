#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -173155929;
int var_11 = -1547806060;
short var_17 = (short)10338;
int zero = 0;
unsigned char var_18 = (unsigned char)158;
unsigned int var_19 = 3552501889U;
unsigned char var_20 = (unsigned char)215;
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
