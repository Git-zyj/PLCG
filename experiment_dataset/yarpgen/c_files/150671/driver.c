#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1302477389;
int var_7 = -1980885505;
short var_8 = (short)-12117;
signed char var_15 = (signed char)-75;
int zero = 0;
signed char var_16 = (signed char)-14;
long long int var_17 = -8894512776080948245LL;
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
