#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1064683480;
int var_12 = -981384989;
unsigned int var_14 = 1513571786U;
int zero = 0;
unsigned char var_17 = (unsigned char)246;
signed char var_18 = (signed char)62;
long long int var_19 = 9051202012854147276LL;
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
