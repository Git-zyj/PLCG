#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2776436022215254500LL;
signed char var_2 = (signed char)82;
unsigned char var_3 = (unsigned char)233;
short var_4 = (short)26809;
int zero = 0;
signed char var_10 = (signed char)81;
unsigned short var_11 = (unsigned short)21286;
unsigned char var_12 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
