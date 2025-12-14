#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)12;
short var_3 = (short)30599;
signed char var_13 = (signed char)97;
unsigned short var_15 = (unsigned short)4702;
int zero = 0;
signed char var_18 = (signed char)67;
int var_19 = 2066297432;
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
