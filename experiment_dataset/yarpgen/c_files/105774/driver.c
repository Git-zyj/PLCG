#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6224030920547927808ULL;
short var_11 = (short)-8174;
unsigned char var_13 = (unsigned char)208;
int zero = 0;
short var_18 = (short)-20916;
unsigned char var_19 = (unsigned char)197;
short var_20 = (short)30827;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
