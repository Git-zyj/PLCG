#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)110;
long long int var_4 = 4930531222493100231LL;
signed char var_8 = (signed char)42;
int var_10 = 287381668;
int var_14 = 1027000925;
int zero = 0;
int var_16 = -1591377720;
signed char var_17 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
