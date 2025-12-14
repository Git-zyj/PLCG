#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1910421371U;
short var_5 = (short)-5186;
short var_6 = (short)-32461;
signed char var_10 = (signed char)26;
long long int var_11 = -8514133324422458474LL;
int zero = 0;
signed char var_12 = (signed char)125;
unsigned short var_13 = (unsigned short)26343;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
