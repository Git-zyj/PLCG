#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47669;
unsigned short var_7 = (unsigned short)14470;
unsigned short var_11 = (unsigned short)7879;
unsigned short var_15 = (unsigned short)30618;
unsigned short var_16 = (unsigned short)62158;
int zero = 0;
unsigned short var_18 = (unsigned short)56886;
unsigned short var_19 = (unsigned short)42677;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
