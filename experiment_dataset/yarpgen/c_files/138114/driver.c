#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-42;
unsigned short var_12 = (unsigned short)49197;
unsigned long long int var_13 = 1560814674589597671ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)71;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 7679049323103348213ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
