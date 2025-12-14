#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-75;
short var_3 = (short)10395;
signed char var_4 = (signed char)-25;
unsigned int var_5 = 1800293777U;
signed char var_7 = (signed char)100;
int zero = 0;
short var_12 = (short)-22685;
signed char var_13 = (signed char)-86;
unsigned short var_14 = (unsigned short)47803;
void init() {
}

void checksum() {
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
