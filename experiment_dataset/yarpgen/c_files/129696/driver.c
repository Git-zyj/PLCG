#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -432578747;
int var_4 = 1280859594;
unsigned long long int var_5 = 17986996913591818982ULL;
unsigned short var_6 = (unsigned short)1415;
int zero = 0;
long long int var_17 = -1591699719379625720LL;
unsigned int var_18 = 110788891U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
