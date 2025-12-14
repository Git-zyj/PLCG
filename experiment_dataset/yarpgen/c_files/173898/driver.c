#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6321262561654561226LL;
short var_6 = (short)-13437;
signed char var_7 = (signed char)-7;
long long int var_10 = -8712906895784765765LL;
long long int var_12 = 3393226937125454409LL;
short var_13 = (short)-10603;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)2748;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
