#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63572;
long long int var_2 = 1165265041803889906LL;
long long int var_7 = -4521681134070934966LL;
signed char var_12 = (signed char)80;
short var_15 = (short)-19620;
int zero = 0;
unsigned long long int var_16 = 7627475692669187072ULL;
long long int var_17 = -6249776694964130417LL;
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
