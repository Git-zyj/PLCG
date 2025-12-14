#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22953;
short var_4 = (short)5537;
unsigned char var_5 = (unsigned char)228;
unsigned long long int var_7 = 14354424799464892177ULL;
unsigned int var_10 = 1841552745U;
long long int var_11 = -6306099688994342318LL;
int zero = 0;
signed char var_12 = (signed char)21;
unsigned char var_13 = (unsigned char)11;
long long int var_14 = 7274597640558185387LL;
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
