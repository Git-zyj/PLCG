#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-61;
unsigned int var_3 = 4223688375U;
signed char var_4 = (signed char)-48;
unsigned long long int var_16 = 8716114220144312253ULL;
long long int var_18 = 7614258169073633502LL;
int zero = 0;
short var_19 = (short)25690;
int var_20 = 549743385;
unsigned int var_21 = 1283525436U;
signed char var_22 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
