#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
short var_2 = (short)-10368;
_Bool var_7 = (_Bool)1;
unsigned char var_13 = (unsigned char)237;
signed char var_14 = (signed char)-7;
int zero = 0;
unsigned long long int var_15 = 11687753241125740318ULL;
unsigned short var_16 = (unsigned short)14205;
void init() {
}

void checksum() {
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
