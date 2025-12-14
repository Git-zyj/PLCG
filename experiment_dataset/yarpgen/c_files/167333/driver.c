#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19801;
unsigned long long int var_3 = 1144087533601069654ULL;
unsigned char var_4 = (unsigned char)216;
long long int var_13 = 1608974526083956393LL;
int zero = 0;
unsigned char var_14 = (unsigned char)232;
long long int var_15 = -5445106101197709630LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
