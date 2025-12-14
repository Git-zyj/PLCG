#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2951607631U;
unsigned long long int var_7 = 4444431778893355417ULL;
int zero = 0;
long long int var_11 = -5931456205679081136LL;
unsigned short var_12 = (unsigned short)2961;
long long int var_13 = -7906043881786968584LL;
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
