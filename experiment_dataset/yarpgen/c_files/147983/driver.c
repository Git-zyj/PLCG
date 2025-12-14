#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
signed char var_15 = (signed char)81;
unsigned int var_16 = 489561686U;
int zero = 0;
unsigned short var_19 = (unsigned short)13556;
unsigned int var_20 = 1899713404U;
unsigned short var_21 = (unsigned short)15147;
void init() {
}

void checksum() {
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
