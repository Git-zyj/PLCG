#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)149;
unsigned short var_3 = (unsigned short)10745;
unsigned int var_4 = 1528844682U;
unsigned long long int var_7 = 8196501161181847619ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)10440;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
