#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5088823667084051373LL;
unsigned short var_5 = (unsigned short)44075;
signed char var_6 = (signed char)93;
unsigned char var_10 = (unsigned char)226;
long long int var_15 = 2758230424904371602LL;
int zero = 0;
unsigned int var_16 = 644064385U;
unsigned int var_17 = 213486471U;
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
