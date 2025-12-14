#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -1260840720;
unsigned short var_4 = (unsigned short)16823;
unsigned short var_12 = (unsigned short)55603;
int zero = 0;
unsigned short var_14 = (unsigned short)9128;
int var_15 = 116607622;
signed char var_16 = (signed char)79;
signed char var_17 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
