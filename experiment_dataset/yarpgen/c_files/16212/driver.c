#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)32;
short var_6 = (short)-16092;
unsigned short var_10 = (unsigned short)30704;
long long int var_11 = -8215148703057863233LL;
short var_13 = (short)-4845;
short var_15 = (short)-23097;
int zero = 0;
unsigned long long int var_17 = 474918086361389629ULL;
long long int var_18 = -1663407873448210779LL;
short var_19 = (short)7544;
unsigned long long int var_20 = 6875475278454322033ULL;
unsigned long long int var_21 = 14806595232146361292ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
