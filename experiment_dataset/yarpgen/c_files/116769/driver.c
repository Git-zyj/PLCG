#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6727518727795097880LL;
unsigned long long int var_11 = 1186679976868163995ULL;
signed char var_12 = (signed char)53;
unsigned char var_18 = (unsigned char)196;
int zero = 0;
short var_20 = (short)-5543;
unsigned char var_21 = (unsigned char)131;
unsigned char var_22 = (unsigned char)185;
short var_23 = (short)-17986;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
