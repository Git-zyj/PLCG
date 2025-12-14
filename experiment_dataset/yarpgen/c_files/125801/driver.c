#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15187;
int var_5 = -2059327397;
unsigned short var_7 = (unsigned short)55434;
unsigned int var_12 = 1846735792U;
unsigned short var_16 = (unsigned short)16858;
int zero = 0;
signed char var_17 = (signed char)6;
unsigned short var_18 = (unsigned short)39042;
short var_19 = (short)-2621;
short var_20 = (short)-13091;
int var_21 = 613414830;
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
