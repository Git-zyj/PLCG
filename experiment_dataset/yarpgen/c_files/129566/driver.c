#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 11193928216663506849ULL;
signed char var_6 = (signed char)81;
unsigned short var_10 = (unsigned short)38588;
int zero = 0;
signed char var_11 = (signed char)-64;
unsigned char var_12 = (unsigned char)146;
short var_13 = (short)-22962;
unsigned short var_14 = (unsigned short)49535;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
