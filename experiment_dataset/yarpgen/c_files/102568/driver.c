#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7840483655708360179LL;
long long int var_7 = 963091264812506036LL;
long long int var_8 = -9219921416597247304LL;
int zero = 0;
long long int var_14 = -5029691093135015984LL;
long long int var_15 = 3764395771270644718LL;
unsigned long long int var_16 = 9269113122920783967ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
